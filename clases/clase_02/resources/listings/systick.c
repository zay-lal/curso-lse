// Configuro SysTick para 1 ms
SysTick_Config(SystemCoreClock / 1000);



/**
 * @brief Handler para interrupcion de SysTick
 */
void SysTick_Handler(void) {
    // Esta interrupcion se llama cada 1 ms

    // TODO
}