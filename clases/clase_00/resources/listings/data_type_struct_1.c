/**
 * @brief Definicion de tarea
*/
typedef struct {
    char *name;
    int priority;
    int stack_size;
    void (*callback)(void*);
} task_t;

// Creo variable del tipo task_t
task_t task;