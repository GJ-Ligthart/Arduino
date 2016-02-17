int knopPin = 2;
int ledPin = 13;
int toestandKnop = 0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  toestandKnop = digitalRead(knopPin);
  if (toestandKnop == HIGH) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
}

