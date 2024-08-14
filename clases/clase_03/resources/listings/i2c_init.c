// Inicializo el clock del I2C1
CLOCK_Select(kI2C1_Clk_From_MainClk);

// Configuracion de master con 400 KHz de clock
i2c_master_config_t config = {
    true,   // Habilito Master
    400000, // Configuro a 400 KHz
    false   // Sin timeout
};
// Clock del sistema de base para generar el clock
I2C_MasterInit(I2C1, &config, SystemCoreClock);