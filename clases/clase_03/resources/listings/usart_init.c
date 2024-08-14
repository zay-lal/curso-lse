CLOCK_Select(kUART1_Clk_From_MainClk);
// Configuracion por defecto:
usart_config_t config = {
    baudRate_Bps = 115200,
    parityMode = kUSART_ParityDisabled,
    stopBitCount = kUSART_OneStopBit,
    bitCountPerChar = kUSART_8BitsPerChar,
    loopback = false,
    enableTx = true,
    enableRx = true,
    syncMode = kUSART_SyncModeDisabled
};

// Habilito USART1
USART_Init(USART1, &usart_config, CLOCK_GetFreq(kCLOCK_MainClk));