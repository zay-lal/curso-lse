// Estructura de configuracion para entrada
gpio_pin_config_t in_config = { kGPIO_DigitalInput };

// Habilito el puerto 0
GPIO_PortInit(GPIO, 0);

// Configuro el pin 4 como entrada
GPIO_PinInit(GPIO, 0, 4, &in_config);

// Leo el estado del pin 4
uint32_t state = GPIO_PinRead(GPIO, 0, 4);