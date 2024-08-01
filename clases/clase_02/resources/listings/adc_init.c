// Habilito funcion analogica para el canal 5 (P0 21)
CLOCK_EnableClock(kCLOCK_Swm);
SWM_SetFixedPinSelect(SWM0, kSWM_ADC_CHN5, true);
CLOCK_DisableClock(kCLOCK_Swm);

// Elijo clock desde el FRO con divisor de 1
CLOCK_Select(kADC_Clk_From_Fro);
CLOCK_SetClkDivider(kCLOCK_DivAdcClk, 1);

// Prendo el ADC
POWER_DisablePD(kPDRUNCFG_PD_ADC0);

// Obtengo frecuencia deseada y calibro ADC
uint32_t freq = CLOCK_GetFreq(kCLOCK_Fro);
ADC_DoSelfCalibration(
    ADC0,
    CLOCK_GetClkDivider(kCLOCK_DivAdcClk)
);
