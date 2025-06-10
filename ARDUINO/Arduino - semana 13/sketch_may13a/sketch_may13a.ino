#define pin_led1 10
#define pin_led2 11
#define pin_led3 12
#define pin_led4 13

void setup() {
  Serial.begin(9600);
  pinMode(pin_led1 ,OUTPUT);
  pinMode(pin_led2 ,OUTPUT);
  pinMode(pin_led3 ,OUTPUT);
  pinMode(pin_led4 ,OUTPUT);
}

void loop() {
  if (serial.available() == 1) {
    char k = serial.read();
    serial.println(k);
  }
  Serial.println("LIGAR LED");
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, HIGH);
  delay(1000);
  Serial.println("DESLIGAR LED");
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  delay(1000);
}
