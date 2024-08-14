// Variable para mandar
char str[] = "Hola mundo!\n";

// Escribo por USART un byte
USART_WriteBlocking(USART1, 
    (uint8_t*) str, 
    sizeof(str) / sizeof(char)
);

// Leo byte por USART
USART_ReadBlocking(USART1, 
    (uint8_t*) str, 
    10
);