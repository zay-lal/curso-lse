// Configuro la salida del DAC al P0 17
CLOCK_EnableClock(kCLOCK_Swm);
SWM_SetFixedPinSelect(SWM0, kSWM_DAC_OUT0, true);
CLOCK_DisableClock(kCLOCK_Swm);

// Habilito la funcion de DAC en el P0 17
CLOCK_EnableClock(kCLOCK_Iocon);
IOCON_PinMuxSet(IOCON, 0, IOCON_PIO_DACMODE_MASK);
CLOCK_DisableClock(kCLOCK_Iocon);

// Prendo el DAC
POWER_DisablePD(kPDRUNCFG_PD_DAC0);

// Configuro el DAC con 1us de refresco
dac_config_t dac_config = { kDAC_SettlingTimeIs1us };
DAC_Init(DAC0, &dac_config);

// Escribo un valor en el DAC (1,65V de salida)
DAC_SetBufferValue(DAC0, 512);