// Variable para el Semaphore Counting
SemaphoreHandle_t semphr;

// Creo el Semaphore Counting
semphr = xSemaphoreCreateCounting(
    100,            // Techo para contar
    0               // Valor inicial
);

// Obtengo el valor del Semaphore Counting
uint32_t count = uxSemaphoreGetCount(semphr);

// Reinicio el Semaphore Counting
xQueueReset(semphr);