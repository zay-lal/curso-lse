// Estructura para una tarea
led_t led_1 = { 1, 0 };

// Creo tarea del mismo template
xTaskCreate(
    task_template,      // Misma tarea de template
    "LED 1",
    configMINIMAL_STACK_SIZE,
    (void*) &led_1,     // Cambia el dato enviado
    tskIDLE_PRIORITY + 1,
    NULL
);