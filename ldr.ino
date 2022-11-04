int ldr = A1; // prota analogica do ldr
int valorLDR = 0; // valor inicial do ldr

void setup() {
   pinMode(ldr, INPUT); // o ldr ira recber valores e enviar para o arduino, logo sera INPUT - entrada
   Serial.begin(9600); // taxa de tranferência em bits por segundo - 9600bps
}
void loop() {
   valorLDR = analogRead(ldr); // faz a leitura do ldr e armazena na variável valorLDR
   //valorLDR = map(valorLDR,0,1023,0,240); //a funcao map faz a conversao para valores menores
   Serial.print("Valor lido pelo LDR = "); // imprime no serial monitor a mensagem Valor lido pelo LDR
   Serial.println(valorLDR); // imprime no serial monitor os dados de valorldr
   delay(1000); // tempo em milissegundos
}
