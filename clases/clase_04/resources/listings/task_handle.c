// Handle para tarea
TaskHandle_t handle;

// API para crear una tarea
xTaskCreate(
    task_fn,    // Funcion a usar
    "Task",     // Nombre para debug
    128,        // Stack size
    NULL,       // Parametros
    1,          // Prioridad
    &handle     // Referencia a handle
);

// Cambio de prioridad a 2
vTaskPrioritySet(handle, 2);
// Elimino tarea
vTaskDelete(handle);