
# Biblio     Led

Essa biblioteca tem o objetivo de tornar mais prático o uso de leds usando funções como **ligar**, **desligar**, **alternar** e **piscar**. 

- A função **ligar** tem 1 sobrecarga sendo ela a ligar padrão que deixa o led ligado continuamente e indefinidamente e a ligar com o parametro de desligar depois de um tempo sendo a contagem de tempo registrad em  mili segundos.
- A função  **desligar** só muda o estado do led para LOW o desligando.
- A função **alternar** troca o estado do led para o seu oposto.
- A função **piscar** tem 2 sobrecargas a padrão que pisca indefinidamente, a primeira sobrecarga que tem o parametro da frequencia que faz o led piscar por segundo de acordo da frequencia escolhida(e voce precisa colocar ela em float), a segunda sobrecarga é piscar com 2 parametros frequencia e repetições sendo repetições a quantidade de vezes que o led vai piscar.
## Estrutura da biblioteca

```text
LED/
├── Examples
├── README.md
├── LICENSE
├── src/
│   ├── LED.h
│   └── LED.cpp
└── library.json
