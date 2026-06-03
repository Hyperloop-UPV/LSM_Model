%% Add to workspace angle, force, resistance and polar fraction
load("LSM_Model/Configuracion planta/CargaDatosLSM.mat");

%% Add to workspace drag data
real_airgap = 14.5;
kd = 0.0518;   % Aerodynamic drag
airgap_vec = 14.5:1:16.5;
speed_drag_vec = 0:5:60;
drag_data = [];
force_drag_raw = [];
force_drag_vec = [];

drag_data = readtable('Configuracion Planta/Carga Datos Drag/Datos/Drag.xlsx');
drag_data = fliplr(drag_data); % Flip columns
force_drag_raw = table2array(drag_data);

force_drag_vec(2:1+(length(force_drag_raw)), :) = force_drag_raw(:,:); 
force_drag_vec(1,1:end) = 0; % Add 0 to the first column for Vel = 0;


%% Other constants
hems_n = 4;
mass = 250;
max_current = 100;
max_voltage = 300;
initial_speed = 1; % 1 m/s
Distance_between_EMS = 0.768; % H9 value
speetec_init = 1 - 0.0925; % This values might be changed, although are not really important
speetec_end = 4 + 2*Distance_between_EMS + 0.5; % When the ems are not inside the booster 
init_angle_from_speetec = 4.565126;
%It will still do the pi when there is no ems in the booster, during some
%few milliseconds.
%speetec_end = 4 + 0.0925;
initial_angle = 0.63; % Will be change in a future.
speetec_offset = 0.174 + 0.116 + 0.0925; % Distance from EMS to Begin Vehicle +  + Distance from speetec


% to motor
%% PI Values
speed_reference = 25; % km/h
speed_reference_ms = speed_reference/3.6;

%Speed
Kp_speed = 6;
Ki_speed = 15;
%Speedgoat
range_sensor_current = 500;
encoder_positions = 2000;



