###########################################################################
## Makefile generated for component 'Speedgoat_Plant_Model'. 
## 
## Makefile     : Speedgoat_Plant_Model.mk
## Generated on : Wed Jun 10 12:32:21 2026
## Final product: $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/Speedgoat_Plant_Model
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = Speedgoat_Plant_Model
MAKEFILE                  = Speedgoat_Plant_Model.mk
MATLAB_ROOT               = /usr/local/MATLAB/R2026a
MATLAB_BIN                = /usr/local/MATLAB/R2026a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/glnxa64
START_DIR                 = /home/osganig/Hyperloop/LSM_Model
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C++
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Simulink Real-Time Toolchain
# Supported Version(s):    
# ToolchainInfo Version:   2026a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# X64_SPEEDGOAT_LINUX_FLAGS

#-----------
# MACROS
#-----------

GCC_TARGET                = x86_64-speedgoat-linux-gcc

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -L$(MATLAB_ROOT)/toolbox/slrealtime/package/x64cc/target/glnxa64/lib -lslrealtime_bhg -lslrealtime_datamodel -lslrealtime_model -lslrealtime_mqtt -lslrealtime_platform -lboost_system -lboost_log -lpcap -ldl -lpci

FORMAT_FOR_ECHO_SH               = ""'$1'
FORMAT_FOR_ECHO                  = $(FORMAT_FOR_ECHO_SH)
HASH                             = \#
SEMICOLON                        = ;
OPEN_PAREN                       = (
CLOSE_PAREN                      = )
ESCAPE_SPECIAL_CHARS             = $(strip $(subst $(CLOSE_PAREN),\$(CLOSE_PAREN),\
	$(subst $(OPEN_PAREN),\$(OPEN_PAREN),\
	$(subst &,\&,\
	$(subst ~,\~,\
	$(subst ?,\?,\
	$(subst *,\*,\
	$(subst },\},\
	$(subst {,\{,\
	$(subst >,\>,\
	$(subst <,\<,\
	$(subst !,\!,\
	$(subst ],\],\
	$(subst [,\[,\
	$(subst $(HASH),\$(HASH),\
	$(subst \\,\\\,\
	$(subst ',\',\
	$(subst ",\",\
	$1))))))))))))))))))

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: X86_64 C Compiler
CC = x86_64-speedgoat-linux-gcc

# Linker: GCC Linker
LD = x86_64-speedgoat-linux-g++

# C++ Compiler: X86_64 C++ Compiler
CPP = x86_64-speedgoat-linux-g++

# C++ Linker: GCC C++ Linker
CPP_LD = x86_64-speedgoat-linux-g++

# Archiver: X86_64 Archiver
AR = x86_64-speedgoat-linux-ar

# Builder: GMAKE Utility
MAKE = bash $SLREALTIME_CODER_TOOLS/slrtmake_x64.sh


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g -O0 -finstrument-functions
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g -O0 -finstrument-functions
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
RM                  = @rm -f
ECHO                = @echo
MV                  = @mv
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c -g $(X64_SPEEDGOAT_LINUX_FLAGS) \
                       -O2 -fwrapv
CPPFLAGS             = -c -g -std=gnu++14 $(X64_SPEEDGOAT_LINUX_FLAGS) \
                       -O2 -fwrapv
CPP_LDFLAGS          = -g $(X64_SPEEDGOAT_LINUX_FLAGS)
CPP_SHAREDLIB_LDFLAGS  = -shared -Wl,--no-undefined -g
LDFLAGS              = -g $(X64_SPEEDGOAT_LINUX_FLAGS)
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -shared -Wl,--no-undefined -g



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/Speedgoat_Plant_Model
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/Speedgoat_Plant_Model_sg_rtw -I$(MATLAB_ROOT)/toolbox/slrealtime/simulink/blocks/package/common/include -I$(MATLAB_ROOT)/toolbox/slrealtime/target/lib/export/include -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I/home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/common/libsg -I/home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10 -I/home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/setup/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DSIMULINK_REAL_TIME
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DEXT_MODE=1 -DMAT_FILE=0 -DONESTEPFCN=1 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=1
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=0
DEFINES_STANDARD = -DMODEL=Speedgoat_Plant_Model -DNUMST=3 -DNCSTATES=0 -DHAVESTDIO -DRT -DUSE_RTMODEL

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(MATLAB_ROOT)/rtw/c/src/rt_matrx.c $(MATLAB_ROOT)/rtw/c/src/rt_printf.c $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/Speedgoat_Plant_Model.cpp $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/Speedgoat_Plant_Model_cal.cpp $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/rtGetInf.cpp $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/rtGetNaN.cpp $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/rt_nonfinite.cpp $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/rtmodel.cpp $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/slrealtime_datatype_ground.cpp $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/rte_Speedgoat_Plant_Model_parameters.cpp $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/main.cpp /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/pwm/sg_fpga_cap_sf_1.c /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/quadrature/sg_fpga_qae_sf_3.c $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/sg_early_init.cpp

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = rt_matrx.o rt_printf.o Speedgoat_Plant_Model.o Speedgoat_Plant_Model_cal.o rtGetInf.o rtGetNaN.o rt_nonfinite.o rtmodel.o slrealtime_datatype_ground.o rte_Speedgoat_Plant_Model_parameters.o main.o sg_fpga_cap_sf_1.o sg_fpga_qae_sf_3.o sg_early_init.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/setup/include/sg_fpga_setup_oberhasli_x86_64.a

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = -lsg_oberhasli_x86_64_r2026a_v2 -L/home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/common/libsg

CPP_LDFLAGS += $(CPP_LDFLAGS_)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = -lsg_oberhasli_x86_64_r2026a_v2 -L/home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/common/libsg

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_)

#-----------
# Linker
#-----------

LDFLAGS_ = -lsg_oberhasli_x86_64_r2026a_v2 -L/home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/common/libsg

LDFLAGS += $(LDFLAGS_)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = -lsg_oberhasli_x86_64_r2026a_v2 -L/home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/common/libsg

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild


all : build
	@echo $(call FORMAT_FOR_ECHO,### Successfully generated all binary outputs.)


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo $(call FORMAT_FOR_ECHO,### Successfully generated all binary outputs.)


prebuild : 


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo $(call FORMAT_FOR_ECHO,### Creating standalone executable "$(PRODUCT)" ...)
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) -Wl,--start-group $(LIBS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS) -Wl,--end-group
	@echo $(call FORMAT_FOR_ECHO,### Created: "$(PRODUCT)")


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/setup/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/setup/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/pwm/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/pwm/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/setup/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/setup/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/quadrature/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/quadrature/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_matrx.o : $(MATLAB_ROOT)/rtw/c/src/rt_matrx.c
	$(CC) $(CFLAGS) -o $@ $<


rt_printf.o : $(MATLAB_ROOT)/rtw/c/src/rt_printf.c
	$(CC) $(CFLAGS) -o $@ $<


Speedgoat_Plant_Model.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/Speedgoat_Plant_Model.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


Speedgoat_Plant_Model_cal.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/Speedgoat_Plant_Model_cal.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtGetInf.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/rtGetInf.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtGetNaN.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/rtGetNaN.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rt_nonfinite.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/rt_nonfinite.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rtmodel.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/rtmodel.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


slrealtime_datatype_ground.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/slrealtime_datatype_ground.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


rte_Speedgoat_Plant_Model_parameters.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/rte_Speedgoat_Plant_Model_parameters.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


main.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/main.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


sg_fpga_cap_sf_1.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/pwm/sg_fpga_cap_sf_1.c
	$(CC) $(CFLAGS) -o $@ $<


sg_fpga_qae_sf_3.o : /home/osganig/.speedgoat/speedgoatlib/R2026a/10.0.0.2_10/sg_blocks/fpga/quadrature/sg_fpga_qae_sf_3.c
	$(CC) $(CFLAGS) -o $@ $<


sg_early_init.o : $(START_DIR)/Speedgoat_Plant_Model_sg_rtw/sg_early_init.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo $(call FORMAT_FOR_ECHO,### PRODUCT = $(PRODUCT))
	@echo $(call FORMAT_FOR_ECHO,### PRODUCT_TYPE = $(PRODUCT_TYPE))
	@echo $(call FORMAT_FOR_ECHO,### BUILD_TYPE = $(BUILD_TYPE))
	@echo $(call FORMAT_FOR_ECHO,### INCLUDES = $(INCLUDES))
	@echo $(call FORMAT_FOR_ECHO,### DEFINES = $(DEFINES))
	@echo $(call FORMAT_FOR_ECHO,### ALL_SRCS = $(ALL_SRCS))
	@echo $(call FORMAT_FOR_ECHO,### ALL_OBJS = $(ALL_OBJS))
	@echo $(call FORMAT_FOR_ECHO,### LIBS = $(LIBS))
	@echo $(call FORMAT_FOR_ECHO,### MODELREF_LIBS = $(MODELREF_LIBS))
	@echo $(call FORMAT_FOR_ECHO,### SYSTEM_LIBS = $(SYSTEM_LIBS))
	@echo $(call FORMAT_FOR_ECHO,### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS))
	@echo $(call FORMAT_FOR_ECHO,### CFLAGS = $(CFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### LDFLAGS = $(LDFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### CPPFLAGS = $(CPPFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### CPP_LDFLAGS = $(CPP_LDFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### ARFLAGS = $(ARFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### MAKE_FLAGS = $(MAKE_FLAGS))


clean : 
	$(ECHO) "### Deleting all derived files ..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


