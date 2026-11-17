#include <stdio.h>
#define invernadero_h

typedef enum {
    E_INICIO = 0,
    E_MEDIR,
    E_TEMP,
    E_HUM,
    E_C02,
    E_LUZ,
    E_ESPERA,
    estados_cantidad
} estados_t;

typedef struct{ 
    float t,hum;
    int c02,hora;
  } sensores_t;

typedef struct{ 
    float t_ref,hum_ref;
    int c02_max;
  } referencia_t;

typedef struct{
    sensores_t sensores;
    referencia_t referencia;
} programa_t;

//prototipos

estados_t t_INICIO(programa_t *prog);
estados_t t_MEDIR(programa_t *prog);
estados_t t_TEMP(programa_t *prog);
estados_t t_HUM(programa_t *prog);
estados_t t_C02(programa_t *prog);
estados_t t_LUZ(programa_t *prog);
estados_t t_ESPERA(programa_t *prog);
