// Variable para verificar cambio de contexto
BaseType_t task_woken = pdFALSE;

// Da el Semaphore y verifica si es necesario el cambio de contexto
xSemaphoreGiveFromISR(
    semphr,     // Semaphore que dar
    &task_woken // Cambio de contexto
);

// Si task_woken cambio a pdTRUE, se va a la tarea apropiada
portYIELD_FROM_ISR(task_woken);