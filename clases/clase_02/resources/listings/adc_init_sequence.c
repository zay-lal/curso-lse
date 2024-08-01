// Configuracion por defecto del ADC
adc_config_t adc_config;
ADC_GetDefaultConfig(&adc_config);
ADC_Init(ADC0, &adc_config);

// Configuro y habilito secuencia A
adc_conv_seq_config_t adc_sequence = {
    .channelMask = 1 << 5,  // Canal 5 habilitado
    .triggerMask = 0,
    .triggerPolarity = kADC_TriggerPolarityPositiveEdge,
    .enableSyncBypass = false,
    .interruptMode = kADC_InterruptForEachConversion
};

ADC_SetConvSeqAConfig(ADC0, &adc_sequence);
ADC_EnableConvSeqA(ADC0, true);