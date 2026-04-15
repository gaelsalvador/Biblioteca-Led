/*Nome: Gael
Projeto: função ligar
Descrição: Mostro como funciona as funções de ligar o led
Data: 14/04
Versão: 1.0
*/


#include <Arduino.h>
#include "LED.h"
led led1(35);
int exemplo = 0;

void setup()
{
   exemplo = 100;
      if(exemplo <= 30)
{
     led1.ligar(); // ele liga o led por um tempo inderterminado
}
else
{
    led1.ligar(10000); //ele liga o led pelo tempo determinado(unidade de medida milisegundos)
}
 

}

void loop()
{
    
    led1.update();
}
   