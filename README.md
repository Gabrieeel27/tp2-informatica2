**# tp2-informatica2**

Trabajo Practico numero 2 de Informática 2 de Gabriel Limongi del curso: 2-11R
  El sistema elegido para diseñar es el de un "Invernadero Automatizado de Girgolas (Pleurotus ostreatus)".
Antes de desarrollar los conceptos a analizar para el desarrollo del tp debemos plantearnos un par de preguntas ¿Que variables deseo controlar?¿Qué elementos utilizaré para ello?

  **Variables a controlar:**
      Temperatura
      Humedad del Ambiente
      CO2
      Iluminacion

  **Elementos a utilizar:**
      Sensor de temperatura
      Calefactor pequeño
      Ventilador/extractor
      Sensor de humedad
      Humidificador
      Sensor de CO2
      Pequeña lámpara
                                              
  Como no existe un único rango universal para todas las cepas de Pleurotus ostreatus ya que los valores varían según la cepa, condiciones climatológicas del lugar donde se desarrolla el cultivo y el propio método de cultivo. Por eso, conviene preparar rangos de referencia y no valores absolutos
  La temperatura se mantendrá aproximadamente entre 15 y 20 °C, usando como referencia un valor cercano a 18 °C, ya que influye directamente sobre el desarrollo y la fructificación del hongo. La humedad del ambiente se mantendrá entre 85 y 95 %, con un valor de aproximadamente 90 % como referencia, para evitar la deshidratación. La concentración de CO₂ se mantendrá preferentemente por debajo de 1000 ppm (partes por millón); cuando este valor sea superado, el sistema activará la ventilación para renovar el aire y reducir su concentración. Estos parámetros serán medidos mediante sensores y comparados continuamente con los valores establecidos, permitiendo que los actuadores realicen las correcciones necesarias.
  Finalmente, la iluminación será controlada durante la etapa de fructificación mediante un fotoperiodo de 12 horas de luz y 12 horas de oscuridad. La luz no es utilizada por las gírgolas para realizar fotosíntesis, sino que actúa como una señal que favorece el correcto desarrollo de los cuerpos fructíferos. De esta manera, el sistema mantendrá de forma automática las cuatro variables dentro de los rangos seleccionados, buscando generar un ambiente estable y adecuado para el cultivo de Pleurotus ostreatus.
