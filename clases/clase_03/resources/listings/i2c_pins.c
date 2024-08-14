// Habilito clock de matriz de conmutacion
CLOCK_EnableClock(kCLOCK_Swm);
// Asigno funciones de SDA y SCL a P0 27 y P0 26
SWM_SetMovablePinSelect(SWM0, 
    kSWM_I2C1_SDA, 
    kSWM_PortPin_P0_27
);
SWM_SetMovablePinSelect(SWM0, 
    kSWM_I2C1_SCL, 
    kSWM_PortPin_P0_26
);
// Quito el clock de la matriz de conmutacion
CLOCK_DisableClock(kCLOCK_Swm);