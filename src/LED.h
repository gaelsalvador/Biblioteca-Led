#ifndef LED_h
#define LED_h
#include <Arduino.h>

class led
{
    private:
        
        uint8_t pino;
        bool estado;
        bool desligarportempo = false;
        uint32_t DesligarNoMomento;
        void funcaoPiscar();
        uint32_t temporizador;
        uint32_t tempoEspera;
        bool estadoPiscar;
        uint16_t repeticoes;
        float frequencia;
        void funcaoDesligamento();
    public:
        led(uint8_t pin);//metodo construtor devera ter o mesmo nome da classe
        
        void ligar(); //ok
        void ligar(uint32_t tempo_ligado_ms);

        void desligar();//ok

        void piscar();//ok
        void piscar(float frequencia );
        void piscar(float frequencia, uint16_t repeticoes );

        bool getestado(); //ok
        uint8_t getpino(); // ok

        void setestado(bool estado); // ok

        void alternar();//ok
        void update();//ok
};
#endif