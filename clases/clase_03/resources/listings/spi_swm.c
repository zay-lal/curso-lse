// Habilito clock para matriz de conmutacion
CLOCK_EnableClock(kCLOCK_Swm);

// Funciones para los pines
SWM_SetMovablePinSelect(SWM0, 
    kSWM_SPI0_SCK, 
    kSWM_PortPin_P0_23
);
SWM_SetMovablePinSelect(SWM0, 
    kSWM_SPI0_MOSI, 
    kSWM_PortPin_P0_22
);
SWM_SetMovablePinSelect(SWM0, 
    kSWM_SPI0_MISO, 
    kSWM_PortPin_P0_20
);
SWM_SetMovablePinSelect(SWM0, 
    kSWM_SPI0_SSEL0, 
    kSWM_PortPin_P0_21
);

// Quito clock de la matriz de conmutacion
CLOCK_DisableClock(kCLOCK_Swm);