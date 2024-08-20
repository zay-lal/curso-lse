// Tarea que da Semaphore
void task_give(void *params) {

    while(1) {
        // Da el Semaphore para desbloquear la tarea
        xSemaphoreGive(semphr);
        // Otras cosas...
    }
}
