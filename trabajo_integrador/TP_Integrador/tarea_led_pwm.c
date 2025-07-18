#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "drivers_simulados.h"

extern QueueHandle_t cola_pwm;

void tarea_led_pwm(void *pvParameters) {
    uint16_t adc_val = 0;
    float porcentaje = 0;

    for (;;) {
        adc_val = LeerADC();
        porcentaje = (adc_val * 100.0) / 4095.0;
        PWM_SetDutyCycle(porcentaje);
        xQueueOverwrite(cola_pwm, &porcentaje);
        vTaskDelay(pdMS_TO_TICKS(200));
    }
}