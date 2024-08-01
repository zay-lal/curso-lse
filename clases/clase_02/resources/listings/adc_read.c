// Inicio conversion por software
ADC_DoSoftwareTriggerConvSeqA(ADC0);

// Estructura de resultado de la conversion
adc_result_info_t adc_info;

// Espero a terminar la conversion
while(!ADC_GetChannelConversionResult(
    ADC0, 5, &adc_info
));

// Resultado de la conversion
uint16_t adc_result = adc_info.result;