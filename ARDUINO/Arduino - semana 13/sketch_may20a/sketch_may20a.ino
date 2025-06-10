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
  if (Serial.available() == 1) {
    char k = Serial.read();
    if (k == '1'){
    digitalWrite(pin_led1, HIGH);
    }
    if (k == '2'){
    digitalWrite(pin_led2, HIGH);
    }
    if (k == '3'){
    digitalWrite(pin_led3, HIGH);
    }
    if (k == '4'){
    digitalWrite(pin_led4, HIGH);
    }
    if (k == '5'){
    digitalWrite(pin_led1, LOW);
    }
    if (k == '6'){
    digitalWrite(pin_led2, LOW);
    }
    if (k == '7'){
    digitalWrite(pin_led3, LOW);
    }
    if (k == '8'){
    digitalWrite(pin_led4, LOW);
    }
    if (k == '9'){
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, HIGH);
    digitalWrite(pin_led3, HIGH);
    digitalWrite(pin_led4, HIGH);
    }
    if (k == '0'){
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, LOW);
    digitalWrite(pin_led3, LOW);
    digitalWrite(pin_led4, LOW);
    }
  }
}
