#include "invernadero.h"

int main() {
    sistema_t invernadero;
    estados_t e_actual = E_INICIO;

    // defino el arreglo de los punteros
    estados_t (*maquina[estados_cantidad])(sistema_t*) = {
        t_INICIO,
        t_MEDIR,
        t_TEMP,
        t_HUM,
        t_C02,
        t_LUZ,
        t_ESPERA;
    };

//bucle infinito para que la maquina no deje de maquinear
    while(1) {
        estado_actual = (*maquina[e_actual])(&invernadero);
    }

    return 0;
}
