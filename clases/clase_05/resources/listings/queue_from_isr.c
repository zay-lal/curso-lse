// Variable para verificar cambio de contexto
BaseType_t task_woken = pdFALSE;

// Escribe en la Queue y verifica si es necesario el cambio de contexto
xQueueSendToBackFromISR(
    queue,      // Queue a la que escribir
    &data,      // Puntero de donde sacar el dato
    &task_woken // Cambio de contexto
);

// Si task_woken cambio a pdTRUE, se va a la tarea apropiada
portYIELD_FROM_ISR(task_woken);