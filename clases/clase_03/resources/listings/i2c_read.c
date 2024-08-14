// Inicia una escritura
I2C_MasterStart(I2C1, 0x66, kI2C_Read);

// Array para guardar datos
uint8_t res[2] = {0};

// Leo dos bytes
I2C_MasterReadBlocking(I2C1, 
    res,    // Donde guardar datos
    2,      // Cuantos bytes leer
    kI2C_TransferDefaultFlag
);

// Detengo la comunicacion
I2C_MasterStop(I2C1);