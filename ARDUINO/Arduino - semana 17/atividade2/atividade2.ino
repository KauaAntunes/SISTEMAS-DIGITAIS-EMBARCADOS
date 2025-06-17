#define led1 8  // definindo os led e botões
#define botaoA 2

int cont = 0;  // iniciando o contador com 0
bool aux = 0; // e a auxiliar com 0 tambem


void setup() {  // definindo quais serão siada de dados e quais serão entradas de dados
  pinMode(led1, OUTPUT); //o led será saida de dados
  pinMode(botaoA, INPUT); // ja o botão será entrada de dados
  Serial.begin(9600); //velocidade de comunicação com o arduino
}

void loop() {
  bool botao1 = digitalRead(botaoA); // definindo e dando a função booleana bool para que ele saiba que receberá 0 ou 1

  if (botao1 == 1) { // iniciando o contador se o botão 1 for precionado
    if (aux == 0) {
      cont++;
      aux = 1;
      delay(1000);// um delay para forçar ele a fazer uma pausa de 1 segundo
    }
  } else { // se o botão 1 não for precionado a auxiliar vira 0
    aux = 0; 
  }Serial.println(cont); // mostrará o contador ao usuario
  if (cont % 2 == 1) {  // se o numero mostrador for impar ele ligará o led1 
    digitalWrite(led1, HIGH);
  } else { // caso não:
     digitalWrite(led1, LOW);
   }
} 