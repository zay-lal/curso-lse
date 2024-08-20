// Tarea que toma Semaphore
void task_take(void *params) {

    while(1) {
        // Toma el Semaphore cuando este disponible
        // se bloquea hasta que lo alguien lo de
        xSemaphoreTake(semphr);
        // Otras cosas...
    }
}
