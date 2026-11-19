#include "invernadero.h"

estados_t t_INICIO(programa_t *prog){
  printf("\nINICIANDO INVERNADERO\n");
  prog->referencia.t_ref = 18.0f;
  prog->referencia.hum_ref = 90.0f;
  prog->referencia.c02_max = 1000;

  return E_ESPERA;
}

estados_t t_ESPERA(programa_t *prog){
  (void)prog;
  printf("\nTiempo de espera finalizado, pasando a medicion\n");
  return E_MEDIR;
}

estados_t t_MEDIR(programa_t *prog){
  printf("\nRealizando la lectura de los sensores:\n");
//MEDICIONES SIMULADAS:
  prog->sensores.t = 24.5f;
  prog->sensores.hum = 80.0f;
  prog->sensores.c02 = 750;
  prog->sensores.hora = 17;

  printf ("\nTemperatura = %.1f\nHumedad = %.1f %\nC02 = %d ppm\nHora = %d hs\n",
    prog->sensores.t, prog->sensores.hum, prog->sensores.c02, prog->sensores.hora);

  return E_TEMP;
}
