#ifndef LED_h
#define LED_h
#include <Arduino.h>

/**
 * @class led
 * @brief Classe para controle não bloqueante de um led
 * Permite ligar, desligar, alternar, ligar por tempo determinado, piscar continuamente, 
 * piscar por frequencia e piscar por quantidade definida e por frequencia
 * @note O metodo Uptade() deve ser chamado continuamente dentro do loop().
 */
class led
{
    private:
        
        uint8_t pino;
        bool estado;
        bool desligarportempo = false;
        uint32_t DesligarNoMomento;
        /**
         * @brief Processa a logica de piscar do led
         */
        void funcaoPiscar();
        uint32_t temporizador;
        uint32_t tempoEspera;
        bool estadoPiscar;
        uint16_t repeticoes;
        float frequencia;
        /**
         * @brief Processa o desligamento do temporizador
         */
        void funcaoDesligamento();
     
    public:
    /**
         * @brief Constroi um objeto led
         * @param pin Numero do pin digital a onde o led está
         */
        led(uint8_t pin);

        /**
         * @brief liga o led continuamente
         */
        void ligar();

        /**
         * @brief liga o led por um tempo determinado
         * @param tempo_ligado_ms determina o tempo que o led vai ficar ligado em milisegundo
         */
        void ligar(uint32_t tempo_ligado_ms);

        /**
         * @brief Desliga o led
         */
        void desligar();

        /**
         * @brief Pisca o led continuamente
         */
        void piscar();

        /**
         * @brief Pisca o led em uma determinada frequencia por segundo continuamente
         * @param frequencia frequencia que o led pisca por segundo
         */
        void piscar(float frequencia );

        /**
         * @brief Pisca o led em uma determinada frequencia por segundo , por uma quantidade determinada de vezes
         * @param frequencia frequencia que o led pisca por segundo
         * @param repeticoes determina a quantidade de vezes que o led pisca
         */
        void piscar(float frequencia, uint16_t repeticoes );

       /**
         * @brief Salva o estado do led
         */
        bool getestado();

        /**
         * @brief Salva o pino
         */
        uint8_t getpino(); 

        /**
         * @brief ele define manualmente o estado do led
         * @param estado true para ligado e false para desligado
         */
        void setestado(bool estado);

        /**
         * @brief Alterna entre ligar e desligar o led, mais precisamente ele troca o estado do led
         */
        void alternar();
        
        /**
         * @brief Ele gerencia as condições para  funções do led
         */
        void update();
};
#endif