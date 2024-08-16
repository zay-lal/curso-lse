// Estructura para una tarea
led_t led_2 = { 1, 2 };

// Creo tarea del mismo template
xTaskCreate(
    task_template,      // Misma tarea de template
    "LED 2",
    configMINIMAL_STACK_SIZE,
    (void*) &led_2,     // Cambia el dato enviado
    tskIDLE_PRIORITY + 1,
    NULL
);