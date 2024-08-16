#include "task.h"

// API para crear una tarea
xTaskCreate(
    task_fn,    // Funcion a usar
    "Task",     // Nombre para debug
    64,         // Stack size
    NULL,       // Parametros
    1,          // Prioridad
    NULL        // Sin handle
);

// En algun lado del programa

/**
 * @brief Tarea de ejemplo
 */
void task_fn(void *params) {

    while(1) {
        // Nunca termina
    }
}