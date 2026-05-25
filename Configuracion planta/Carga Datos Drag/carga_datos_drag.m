datos_drag = [];
airgap = [];
fuerza_drag = [];
asig_fuerza_drag = [];

%% Carga Datos

datos_drag = readtable('Configuracion Planta/Carga Datos Drag/Datos/Drag.xlsx');

datos_drag = fliplr(datos_drag);

asig_fuerza_drag = table2array(datos_drag);

%% V = 0 Km/h

fuerza_drag(2:1+(length(asig_fuerza_drag)), :) = asig_fuerza_drag(:,:);
fuerza_drag(1,1:end) = 0;

%% Asignacion vectores

airgap = 14.5:1:16.5;

velocidad_drag = 0:5:60;


%% Drag aerodinámico

kd = 0.0518;