// Inicia escritura al slave con direccion 0x48
I2C_MasterStart(I2C1, 0x48, kI2C_Write);

// Registro y valor a escribir
uint8_t buf[] = { 0x66, 0xfa };

// Escribe ambos bytes
I2C_MasterWriteBlocking(I2C1, 
    buf,    // Datos para escribir
    2,      // Cuantos bytes
    kI2C_TransferDefaultFlag
);

// Detengo la comunicacion
I2C_MasterStop(I2C1);