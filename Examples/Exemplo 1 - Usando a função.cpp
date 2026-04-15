/*Nome: Gael
Projeto: função Desligar
Descrição: Mostro como funciona as funções de desligar o led sem digitalWrite
Data: 14/04
Versão: 1.0
*/


#include <Arduino.h>
#include "LED.h"
led led1(35);
int exemplo = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  
if(exemplo < 100)
{
led1.ligar(); //Liga o led Mudando o estado dele enquanto exemplo for 
exemplo++;
}
else
{
led1.desligar(); //Desliga o led mudando o estado dele do HIGH para LOW
}
led1.update();
}