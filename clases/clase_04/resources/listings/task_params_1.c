/**
 * @brief Estructura para un LED
 */
typedef struct {
    uint32_t port;
    uint32_t pin;
} led_t;



/**
 * @brief Tarea template
 */
void task_template(void *params) {
    // Casteo al tipo de dato
    led_t led = *(led_t*) params;
    
    while(1) {
        GPIO_PortToggle(GPIO, led.port, 1 << led.pin);
    }
}