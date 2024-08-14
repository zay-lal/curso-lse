// Evento al que se asigna el PWM
uint32_t event;
// Eligo el clock para el Timer
uint32_t sctimer_clock = CLOCK_GetFreq(kCLOCK_Fro);

// Inicializo el PWM
SCTIMER_SetupPwm(
    SCT0,
    &pwm_config,    // Estructura anterior
    kSCTIMER_CenterAlignedPwm,
    1000,           // 1KHz de frecuencia
    sctimer_clock,  // Clock de base
    &event
);

// Inicializo el Timer
SCTIMER_StartTimer(SCT0, kSCTIMER_Counter_U);