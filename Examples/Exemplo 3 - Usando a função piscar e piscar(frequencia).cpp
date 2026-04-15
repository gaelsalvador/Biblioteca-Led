/*Nome: Gael
Projeto: função Piscar e piscar(frequencia)
Descrição: Mostro como funciona a função piscar sem parametros
Data: 14/04
Versão: 1.0
*/


#include <Arduino.h>
#include "LED.h"
led led1(35);
int exemplo = 0;
bool validarpiscar1 = true;
bool validarpiscar2 = true;

void setup()
{
 Serial.begin(9600);
 
}

void loop()
{
  if(exemplo < 2000)
  {
    if(validarpiscar1) 
    {
    led1.piscar(); // ele pisca indefinidamente fazendo o estado do led ir de HIGH para LOW
    validarpiscar1 = false;
  }
    exemplo++;
    Serial.println(exemplo);
  }
  else
  {
    if(validarpiscar2)
    {
    led1.piscar(4.0); //Ele pisca aumentando a frequencia da piscada por segundo sequindo o valor selecionado em float
    validarpiscar2 = false;
    }
  }

led1.update();
}