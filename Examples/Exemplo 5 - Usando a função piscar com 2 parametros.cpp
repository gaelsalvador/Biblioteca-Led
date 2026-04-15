/*Nome: Gael
Projeto: função piscar com 2 parametros
Descrição: Mostro como funciona a função piscar com dois parametros
Data: 14/04
Versão: 1.0
*/

#include <Arduino.h>
#include "LED.h"
led led1(35);
const uint8_t but = 0;

void setup()
{
  led1.piscar(2.0, 30); // A função piscar com 2 com dois parametros sendo respectivamente frequencia e repetições, fazendo o primeiro piscar um determinado numero de vezes por segundo e o segundo a quantidade de vezes que colocamos
}

void loop()
{

  led1.update();
}