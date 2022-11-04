#include <Servo.h> //eh necessario incluir uma biblioteca para fazer o uso do servo

#define SERVO 3 //definidno a porta digital 3 para o servo

Servo s; // criacao de um objeto servo para controlar o servo ou seja uma variavel do tipo servo
int pos = 0; // posição do servo

void setup (){
  s.attach(SERVO); // associando o nosso servo s com a porta que definimos - attach - anexar
  Serial.begin(9600); // taxa de tranferência em bits por segundo - 9600bps
  s.write(pos); // escreve a posicao/angulo inicial do servo
}

void loop(){
  if(pos <= 180){ // se a posicao do servo for menor ou igual a 180 ele ira fazer o que se pede
    pos = pos + 5; // soma mais 5 a posicao do servo
    s.write(pos); // escreve a posicao/angulo do servo
    delay(150); // tempo em milissegundos
  }
  else{ // caso a posicao do servo seja maior que 180 ele ira fazer o que se pede
    pos = 0; // a posicao receb 0 
    delay(1000); // tempo em milissegundos
  }
}
