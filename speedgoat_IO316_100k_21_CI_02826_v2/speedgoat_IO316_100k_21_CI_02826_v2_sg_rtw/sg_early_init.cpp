#include "speedgoat_IO316_100k_21_CI_02826_v2.h"
#include "speedgoat_IO316_100k_21_CI_02826_v2_private.h"
#include "sg_printf.h"
#include "sg_early_init.h"
#include "simstruc.h" // This is required if there are no S-function blocks in the model

static RTWSfcnInfo sgEarlyInitSfcnInfo;
struct _ssBlkInfo2 sgEarlyInitBlkInfo2 = {.rtwSfcnInfo = &sgEarlyInitSfcnInfo};

void sg_init_sfcns(void)
{
    sg_printf(sg_debug, "Initializing [EARLY INIT] S-functions\n");
    
    rtssSetErrorStatusPtr(&sgEarlyInitSfcnInfo, (&rtmGetErrorStatus(speedgoat_IO316_100k_21_CI_02826_v2_M)));
    sg_early_init_set_blkInfo2((void*)&sgEarlyInitBlkInfo2);
    
    {
        int32_t ErrCode;
        uint32_t *bitstream = NULL;
        uint8_t *fpgacode = NULL;
        char *devname;
        sg_fpga_io3xxModuleIdT  moduleId;
        static char mcsBinFile[200];
        static char msg[500];

        sg_initModelRun();

        // Determine path to bitstream file
        if (sg_getModelBaseDir(mcsBinFile, sizeof(mcsBinFile))) {
            sprintf(msg, "Could not determine location of the model on the target machine.");
            rtmSetErrorStatus(speedgoat_IO316_100k_21_CI_02826_v2_M, msg);
            return;
        }
        if ((strlen(mcsBinFile) + strlen("/fpga/speedgoat_IO316_100k_21_CI_02826_v2.mcs") + 1) > sizeof(mcsBinFile)) {
            sprintf(msg, "Path to the bitstream (model name + bitstream name) is too long.");
            rtmSetErrorStatus(speedgoat_IO316_100k_21_CI_02826_v2_M, msg);
            return;
        }
        strcat(mcsBinFile, "/fpga/speedgoat_IO316_100k_21_CI_02826_v2.mcs");
        SG_PRINTF(DEBUG, "Bitstream: %s\n", mcsBinFile);

            uint32_t i;
            FILE *mcs;
            // Read bitstream file
            if ((mcs = fopen(mcsBinFile, "r")) == NULL){
                sprintf(msg, "Bitstream file not found at %s\n", mcsBinFile);
                rtmSetErrorStatus(speedgoat_IO316_100k_21_CI_02826_v2_M, msg);
                SG_PRINTF(ERROR,msg);
                return; 
            }
            bitstream = (uint32_t *) malloc(3318808*sizeof(uint32_t));
            fpgacode = (uint8_t *) malloc(3318808*sizeof(uint8_t));
            for(i = 0; i<3318808; i++){
                fscanf(mcs, "%d\n", &bitstream[i]);
                fpgacode[i] = bitstream[i];
            }
            fclose(mcs);

        // Get module IDs (PIC info)
        SG_PRINTF(INFO,"Getting module information.\n");
        ErrCode = (int32_t)sg_fpga_IO3xxGetModuleId(316100, &moduleId);

        if (ErrCode >= 0)
        {
            devname = moduleId.devname;
        
            SG_PRINTF(DEBUG, "boardType: %d\n", 316100);
            SG_PRINTF(DEBUG, "ErrCode: %d\n", ErrCode);
            SG_PRINTF(DEBUG, "******************************************\n");
            SG_PRINTF(DEBUG, "moduleId->devname: %s\n", moduleId.devname);
            SG_PRINTF(DEBUG, "moduleId->vendorid: 0x%x\n", moduleId.vendorid);
            SG_PRINTF(DEBUG, "moduleId->subvendorid: 0x%x\n", moduleId.subvendorid);
            SG_PRINTF(DEBUG, "moduleId->deviceid: 0x%x\n", moduleId.deviceid);
            SG_PRINTF(DEBUG, "moduleId->subdeviceid: 0x%x\n", moduleId.subdeviceid);
            SG_PRINTF(DEBUG, "moduleId.moduleArchitecture: %d\n", moduleId.moduleArchitecture);
        }
        else
        {
            sprintf(msg, "Setup block: board type unknown.");
            rtmSetErrorStatus(speedgoat_IO316_100k_21_CI_02826_v2_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
        }
        // Call the programming function
        SG_PRINTF(INFO,"Running board specific programming file.\n");
            ErrCode = IO31x_IO32x_programmFPGA(devname, (int16_t)-1,
                (int16_t)-1, (int32_t)1, (int32_t)1,
                (int32_t)0, (uint32_t)3318808, fpgacode,
                &moduleId, (uint32_t)85,(uint32_t)58648706);

        // Set board type (by now the board is registered)
        io3xxSetBoardTypeSgLib(1, 316100);

        // Free the bitstream allocation
        free(bitstream);
        free(fpgacode);

        // Handle any error states
        if (ErrCode)
        {
            switch (ErrCode)
            {
                case BOARD_NOT_FOUND:
                    // reason for this error can be found in the pSgErrorStr (error message from sg-lib (sg_findPciDevice))
                    sprintf(msg, "%s", pSgErrorStr);

                case EEPROM_ERROR:
                    sprintf(msg, "Setup block %s: Error updating board EEPROM.\n", devname);

                case REPROG_ERROR:
                    sprintf(msg, "Setup block %s: Error writing new bitstream to FPGA.\n", devname);

                case FLASH_ERROR:
                    sprintf(msg, "Setup block %s: Bitstream flash storage error.\n", devname);

                case BIST_ERROR:
                    sprintf(msg, "Setup block %s: Built in self test error.\n", devname);

                case ICAP_RECONF_FAILED:
                    sprintf(msg, "Setup block %s: ICAP Reconfiguration was not successful.\n",devname);

                case BOARD_TYPE_UNKNOWN:
                    sprintf(msg, "Setup block %s: The board type selected is unknown.\n",devname);
                
                case DMA_SETUP_ERROR:
                    sprintf(msg, "Setup block %s: Error during DMA setup.\n",devname);

                default:
                    sprintf(msg, "Setup block %s: An unknown error %d occurred.\n", devname, ErrCode);
            }
            rtmSetErrorStatus(speedgoat_IO316_100k_21_CI_02826_v2_M, msg);
            SG_PRINTF(ERROR,msg);
            return;
        }
        
        // ------------------------------------------------------------------------------------------------------
        // i/o extension callbacks
        // ------------------------------------------------------------------------------------------------------

        // check and decide whether the i/o extension interface uses the old wrapper with i2c or if the design
        // implements the axi i2c ip core

        // check if the bitstream has the axi iic ip cores for p14
        uint32_t useAxiI2cFlag = sg_fpga_io3xx_getP14AxiIicFlag(1);
        (void)useAxiI2cFlag;

        // call the i/o extension init functions
            // -21
                SG_PRINTF(INFO, "%s ID %d: Init Rear I/O Extension -21 at position %d \n", devname, 1, 1);
                if (useAxiI2cFlag){
                    ErrCode = IO3xx_21_update2(devname, 1, 10922U, 16U, 0U, 0);
                } else {
                    IO3xx_21_update(devname, 1, 10922U, 16U, 0U,0);
                    ErrCode = 0;
                }


            // throw an error if something went wrong
            // The error codes are defined in sg_fpga_xilinx_i2c.h in the FPGA-setup lib
                if (ErrCode != 0) {
                    sprintf(msg, "%s ID %d: Error updating I/O extension position %d. ErrorCode: %d", devname, 1, 1, ErrCode);
                    rtmSetErrorStatus(speedgoat_IO316_100k_21_CI_02826_v2_M, msg);
                    // need to free some pointers? --> should be handled in the called functions
                    return;
                } else {
                    SG_PRINTF(INFO, "%s ID %d: Successfully initialized rear I/O extension at position %d.\n", devname, 1, 1);
                }


        // initial settings on module registry        
        // Set all DIO's to registry inital values (all input, all output states = 0, all sources = codemodule)
            sg_fpga_io3xx_initDioLines(1, SG_FPGA_IO3XX_BAR2);

        // DMA Engine and DMA Controller settings
        ScatterGatherDmaState *sgDmaSharedState;
        sg_fpga_io3xx_getSharedSgDmaState(1, &sgDmaSharedState);
        sgDmaSharedState->enableDma             = 0;
        sgDmaSharedState->useFpgaDmaController  = 0;

        sgDmaSharedState->dmaTriggerTimeTicks   = (uint32_t)(0.001000 * 75000000.000000);
        sgDmaSharedState->dmaTriggerSourceSel   = 0;
        sgDmaSharedState->dmaModeSequential     = 1;
        sgDmaSharedState->dmaModeParallel       = 0;

        // set FPGA frequency and sample time
        modelTimings_t *modelTimingsPtr;
        sg_fpga_io3xx_getSharedTimingInfo(1, &modelTimingsPtr);
        modelTimingsPtr->fpgaFrequency = 75000000.000000;
        modelTimingsPtr->sampleTime = 0.001000;

    }
}

__attribute__((constructor)) void early_init_setup(void)
{
    sg_register_early_init_function(sg_init_sfcns);
}
