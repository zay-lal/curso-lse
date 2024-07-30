/**
 * @brief Callbak para tarea
*/
void task_cbk(void *params) {
    // TODO
}

// Puntero a estructura
task_t *ptr = &task;
// Asigno callback
ptr->callback = task_cbk;