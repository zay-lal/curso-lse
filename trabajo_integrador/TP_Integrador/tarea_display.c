#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "drivers_simulados.h"

extern QueueHandle_t cola_lux;
extern QueueHandle_t cola_setpoint;

void tarea_display(void *pvParameters) {
    static bool mostrar_luz = true;
    float valor = 0;

    for (;;) {
        if (BotonPresionado(BOTON_USER)) {
            mostrar_luz = !mostrar_luz;
            vTaskDelay(pdMS_TO_TICKS(300));
        }

        if (mostrar_luz) {
            xQueuePeek(cola_lux, &valor, 0);
        } else {
            xQueuePeek(cola_setpoint, &valor, 0);
        }

        Display7Segmentos_Mostrar((int)valor);
        vTaskDelay(pdMS_TO_TICKS(250));
    }
}