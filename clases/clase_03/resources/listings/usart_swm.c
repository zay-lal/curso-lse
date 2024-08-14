// Habilito clock de matriz de conmutacion
CLOCK_EnableClock(kCLOCK_Swm);
// Asigno funciones de TX y RX a P0 25 y P0 24
SWM_SetMovablePinSelect(SWM0, 
    kSWM_USART1_TXD, 
    kSWM_PortPin_P0_25
);
SWM_SetMovablePinSelect(SWM0, 
    kSWM_USART1_RXD, 
    kSWM_PortPin_P0_24
);
// Quito el clock de la matriz de conmutacion
CLOCK_DisableClock(kCLOCK_Swm);