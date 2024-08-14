SCTIMER_UpdatePwmDutycycle(
    SCT0, 
    kSCTIMER_Out_4,     // Salida usada
    75,                 // Ancho de pulso
    event
);

SCTIMER_UpdatePwmDutycycle(
    SCT0, 
    kSCTIMER_Out_4,     // Salida usada
    0,                  // PWM apagado
    event
);

SCTIMER_UpdatePwmDutycycle(
    SCT0, 
    kSCTIMER_Out_4, // Salida usada
    75,             // Continua valor maximo
    event
);