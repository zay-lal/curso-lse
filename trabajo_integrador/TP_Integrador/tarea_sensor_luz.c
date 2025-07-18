#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "drivers_simulados.h"

extern QueueHandle_t cola_lux;

void tarea_sensor_luz(void *pvParameters) {
    uint16_t lux = 0;
    float porcentaje = 0;

    for(;;) {
        lux = BH1750_ReadLux();
        porcentaje = (lux * 100.0) / 20000.0;
        if (porcentaje > 100) porcentaje = 100;
        xQueueOverwrite(cola_lux, &porcentaje);
        vTaskDelay(pdMS_TO_TICKS(200));
    }
}