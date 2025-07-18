#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "drivers_simulados.h"
#include <stdio.h>

extern QueueHandle_t cola_lux;
extern QueueHandle_t cola_setpoint;
extern QueueHandle_t cola_pwm;

void tarea_uart_debug(void *pvParameters) {
    float luz = 0, setpoint = 0, pwm = 0;
    TickType_t start = xTaskGetTickCount();

    for (;;) {
        TickType_t now = xTaskGetTickCount();
        uint32_t tiempo_ms = (now - start) * portTICK_PERIOD_MS;

        xQueuePeek(cola_lux, &luz, 0);
        xQueuePeek(cola_setpoint, &setpoint, 0);
        xQueuePeek(cola_pwm, &pwm, 0);

        printf("[UART] Tiempo: %lu ms | Luz: %.1f%% | Setpoint: %.1f%% | LED: %.1f%%\r\n",
               tiempo_ms, luz, setpoint, pwm);

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}