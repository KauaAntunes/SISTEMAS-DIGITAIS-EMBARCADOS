#define led1 8 // definindo os led e botões
#define led2 9
#define botaoA 2
#define botaoB 3


void setup() { // definindo quais serão siada de dados e quais serão entradas de dados
  pinMode(led1, OUTPUT); //os leds serão saida de dados 
  pinMode(led2, OUTPUT);
  pinMode(botaoA, INPUT); // ja os botões serão entradas de dados
  pinMode(botaoB, INPUT);
}

void loop() {
  bool botao1 = digitalRead(botaoA); // definindo e dando a função booleana bool para que ele saiba que receberá 0 ou 1
  bool botao2 = digitalRead(botaoB);

  if (botao1 == 1) { // se o botão a for 1 ele executará o seguinte comando: 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  } else { // se for ao contrario ele executará:
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
}
