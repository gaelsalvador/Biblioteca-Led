#include "LED.h"

led::led(uint8_t pin) : pino(pin), estado(LOW), desligarportempo(false), DesligarNoMomento(0), estadoPiscar(false), tempoEspera(0),repeticoes(0),temporizador(0)
{
    pinMode(pino, OUTPUT);
}
void led::ligar()
{
    estado = HIGH;
    estadoPiscar = false;
    desligarportempo = false;
}
void led::ligar(uint32_t tempo_ligado_ms)
{
    estado = HIGH;
    desligarportempo = true;
    DesligarNoMomento = millis() + tempo_ligado_ms;
    estadoPiscar = false;
}
void led::desligar()
{
    estado = LOW;
    estadoPiscar = false;
    desligarportempo = false;
}
void led::alternar()
{
    estado = !estado;
    estadoPiscar = false;
    desligarportempo = false;
}
void led::update()
{

    if (desligarportempo)
    {
        funcaoDesligamento();
    }
    if (estadoPiscar)
    {
        funcaoPiscar();
    }

    digitalWrite(pino, estado);
}
bool led::getestado()
{
    return estado;
}
uint8_t led::getpino()
{
    return pino;
}
void led::setestado(bool estado)
{
    this->estado = estado;
}

void led::piscar()
{
    estadoPiscar = true;
    temporizador = millis();
    tempoEspera = 1000;
    desligarportempo = false;
}
void led::piscar(float frequencia)
{
    estadoPiscar = true;
    temporizador = millis();
    tempoEspera = (1000.0f / (2.0f * frequencia));
    desligarportempo = false;
}
void led::piscar(float frequencia, uint16_t repeticoes)
{
    estadoPiscar = true;
    temporizador = millis();
    tempoEspera = (1000.0f / (2.0f * frequencia));
    // estado = HIGH;
    this->repeticoes = repeticoes * 2;
    desligarportempo = false;
}
void led::funcaoPiscar()
{

    if (millis() - temporizador >= tempoEspera)
    {

        estado = !estado;
        temporizador = millis();
        if (repeticoes > 0)
        {
            repeticoes--;
            Serial.println(repeticoes);
            if (repeticoes == 0)
            {

                estadoPiscar = false;
                estado = LOW;
            }
        }
    }
}
void led::funcaoDesligamento()
{
    if (millis() >= DesligarNoMomento)
        {
            estado = LOW;
            desligarportempo = false;
        }
}