// Obtengo la cantidad de ticks actuales
TickType_t xLastWakeTime = xTaskGetTickCount();
vTaskDelayUntill(&xLastWakeTime, 250)