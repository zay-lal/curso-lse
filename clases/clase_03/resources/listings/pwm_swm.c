// Habilito clock de matriz de conmutacion
CLOCK_EnableClock(kCLOCK_Swm);
// Asigna la salida 4 del SCT al P1_1
SWM_SetMovablePinSelect(SWM0, 
    kSWM_SCT_OUT4, 
    kSWM_PortPin_P1_1
);
// Quito el clock de la matriz de conmutacion
CLOCK_DisableClock(kCLOCK_Swm);