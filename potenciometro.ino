int potenciometro = A1;  // definicao da entrada analogica do potenciometro
int valor = 0; // valor incial da leitura do potenciometro

void setup(){
  pinMode(potenciometro, INPUT); // entrada de informacoes pelo potenciometro
  Serial.begin(9600); // taxa de tranferência em bits por segundo - 9600bps             
}

void loop(){
  valor = analogRead(potenciometro); // a funcao analogRead faz a leitura do sinal recebido do potenciometro 
  Serial.print("Valor do potenciometro: ");
  Serial.println(valor); // impressao no serial monitor dos valores lidos
  delay(100); // tempo em milissegundos
}
