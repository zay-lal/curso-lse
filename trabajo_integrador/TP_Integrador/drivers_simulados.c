#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define S1 1
#define S2 2
#define BOTON_USER 3

uint16_t BH1750_ReadLux(void) {
    static uint16_t lux = 0;
    lux = (lux + 500) % 21000;
    return lux;
}

bool BotonPresionado(int boton) {
    static int contador = 0;
    contador++;
    if (boton == S1 && contador % 100 == 0) return true;
    if (boton == S2 && contador % 150 == 0) return true;
    if (boton == BOTON_USER && contador % 200 == 0) return true;
    return false;
}

uint16_t LeerADC(void) {
    static uint16_t adc = 0;
    adc = (adc + 100) % 4096;
    return adc;
}

void PWM_SetDutyCycle(float porcentaje) {
    printf("[PWM] LED azul: %.1f%%\r\n", porcentaje);
}

void Display7Segmentos_Mostrar(int valor) {
    printf("[Display] Valor mostrado: %d\r\n", valor);
}