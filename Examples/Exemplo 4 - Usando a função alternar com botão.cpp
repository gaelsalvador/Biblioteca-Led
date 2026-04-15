/*Nome: Gael
Projeto: função Alternar
Descrição: Mostro como funciona a função alternar, e dentro deste exemplo utilizo um botão para melhor explicação
Data: 14/04
Versão: 1.0
*/


#include <Arduino.h>
#include "LED.h"
led led1(35);
const uint8_t but = 0;



void setup()
{
  pinMode(but, INPUT_PULLUP);
 
}

void loop()
{
bool  estadoatualbut = digitalRead(but);
    static bool  estadoanteriorbut = HIGH;
    if(!estadoatualbut && estadoanteriorbut)
    {
        led1.alternar(); //alterna o estado de led de LOW para HIGH ou de HIGH para LOW quando o botão é precionado
    }
    estadoanteriorbut = estadoatualbut;
  

led1.update();
}