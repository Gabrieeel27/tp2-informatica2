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

estados_t t_TEMP(programa_t *prog){
  float delta_t = 3.0f;

  if(prog->sensores.t > (prog->referencia.t_ref + delta_t)){
    printf("Temperatura alta, Activando el Extractor");
  }
    if(prog->sensores.t < (prog->referencia.t_ref - delta_t)){
    printf("Temperatura baja, Activando el Calefactor");
  }
    if(prog->sensores.t < (prog->referencia.t_ref + delta_t) && 
      prog->sensores.t > (prog->referencia.t_ref - delta_t)){
    printf("Temperatura optima, Apagando el Extractor y el Calefactor");
  }
return E_HUM;
}

estados_t t_HUM(programa_t *prog){
  float delta_h = 5.0f;

  if(prog->sensores.hum > (prog->referencia.hum_ref + delta_h)){
    printf("Humedad alta, Activando el Extractor");
  }
    if(prog->sensores.hum < (prog->referencia.hum_ref - delta_h)){
    printf("Humedad baja, Activando el Humedificador");
  }
    if(prog->sensores.hum < (prog->referencia.hum_ref + delta_h) && 
      prog->sensores.hum > (prog->referencia.hum_ref - delta_h)){
    printf("Humedad optima, Apagando el Extractor y el Humedificador");
  }
return E_C02;
}

estados_t t_C02(programa_t *prog){

  if(prog->sensores.c02 > prog->referencia.c02_max){
    printf("C02 alto, Activando el Extractor");
  }else{
    printf("C02 en rangos optimos, Extractor apagado");
  }
return E_LUZ;
}

estados_t t_LUZ(programa_t *prog){
int h_prende = 8;
int h_apaga = 20;
  if(prog->sensores.hora >= h_prende && prog->sensores.hora <=h_apaga){
    printf("Iluminacion Encendida");
  }else{
    printf("Iluminacion Apagada");
  }
return E_ESPERA;
}
