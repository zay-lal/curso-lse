#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "drivers_simulados.h"

extern QueueHandle_t cola_setpoint;

void tarea_setpoint(void *pvParameters) {
    static float setpoint = 50;

    for (;;) {
        if (BotonPresionado(S1)) {
            setpoint += 1;
            if (setpoint > 75) setpoint = 75;
            vTaskDelay(pdMS_TO_TICKS(200));
        }
        if (BotonPresionado(S2)) {
            setpoint -= 1;
            if (setpoint < 25) setpoint = 25;
            vTaskDelay(pdMS_TO_TICKS(200));
        }
        xQueueOverwrite(cola_setpoint, &setpoint);
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}