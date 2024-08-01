// Configuracion para salida, salida en 0 por defecto
gpio_pin_config_t out_config = { kGPIO_DigitalOutput, 0 };

// Habilito el clock del GPIO 1
GPIO_PortInit(GPIO, 1);

// Configuro el pin 0 del GPIO 1 como salida
GPIO_PinInit(GPIO, 1, 0, &out_config);

// Escribo un 1 en el pin 0
GPIO_PinWrite(GPIO, 1, 0, 1);