#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "drivers_simulados.c"

QueueHandle_t cola_lux;
QueueHandle_t cola_setpoint;
QueueHandle_t cola_pwm;

extern void tarea_sensor_luz(void *);
extern void tarea_setpoint(void *);
extern void tarea_display(void *);
extern void tarea_led_pwm(void *);
extern void tarea_uart_debug(void *);

int main(void) {
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
    BOARD_InitDebugConsole();

    cola_lux = xQueueCreate(1, sizeof(float));
    cola_setpoint = xQueueCreate(1, sizeof(float));
    cola_pwm = xQueueCreate(1, sizeof(float));

    xTaskCreate(tarea_sensor_luz, "SensorLuz", 128, NULL, 2, NULL);
    xTaskCreate(tarea_setpoint, "Setpoint", 128, NULL, 2, NULL);
    xTaskCreate(tarea_display, "Display", 128, NULL, 1, NULL);
    xTaskCreate(tarea_led_pwm, "LedPWM", 128, NULL, 2, NULL);
    xTaskCreate(tarea_uart_debug, "UART", 256, NULL, 1, NULL);

    vTaskStartScheduler();
    while (1) {}
    return 0;
}