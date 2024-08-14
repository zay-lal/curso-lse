// Configuracion generica del SCT Timer
sctimer_config_t sctimer_config;
SCTIMER_GetDefaultConfig(&sctimer_config);
SCTIMER_Init(SCT0, &sctimer_config);

// Configuro el PWM
sctimer_pwm_signal_param_t pwm_config = {
    kSCTIMER_Out_4,     // Salida del Timer
    kSCTIMER_LowTrue,	// Logica negativa
    50          // 50% de ancho de pulso
};