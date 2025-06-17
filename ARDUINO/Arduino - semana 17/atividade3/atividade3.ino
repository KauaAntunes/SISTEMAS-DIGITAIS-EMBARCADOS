#define P 8 // definindo os led e botões
#define AL 9
#define M1 10
#define M2 11
#define botaoA 2
#define botaoB 3
#define botaoC 4
#define botaoD 5


void setup() { // definindo quais serão siada de dados e quais serão entradas de dados
  pinMode(P, OUTPUT); //os leds serão saida de dados
  pinMode(AL, OUTPUT);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(botaoA, INPUT); // ja os botões serão entrada de dados
  pinMode(botaoB, INPUT);
  pinMode(botaoC, INPUT);
  pinMode(botaoD, INPUT);
}

void loop() {
  bool A = digitalRead(botaoA); // definindo e dando a função booleana bool para que ele saiba que receberá 0 ou 1
  bool B = digitalRead(botaoB);
  bool C = digitalRead(botaoC);
  bool D = digitalRead(botaoD);

  if (A == 1) {  // se o nivel for A:
    digitalWrite(P, LOW);
    digitalWrite(AL, LOW);
    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
  }
  if ((A == 0) && (B == 1)) { //se o nivel for inferior a B:
    digitalWrite(P, HIGH);
    digitalWrite(AL, LOW);
    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
  }
  if ((A == 1) && (B == 1)) { //se o nivel for acima de B:
    digitalWrite(P, LOW);
    digitalWrite(AL, LOW);
    digitalWrite(M1, HIGH);
    digitalWrite(M2, HIGH);
  }
  if ((C == 1) && (D == 1)) { //se o nivel for abaixo de B:
    digitalWrite(P, LOW);
    digitalWrite(AL, LOW);
    digitalWrite(M1, HIGH);
    digitalWrite(M2, LOW);
  }
  if (D == 1) { //se o nivel for abaixo de C:
    digitalWrite(P, LOW);
    digitalWrite(AL, HIGH);
    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
  }
  if (D == 0) { // se o nivel for abaixo de D:
    digitalWrite(P, HIGH);
    digitalWrite(AL, LOW);
    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
  }
}
