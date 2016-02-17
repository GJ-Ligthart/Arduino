int gelePin = 11;
int rodePin = 10;
int groenePin = 9;


void setup()
{
  pinMode(gelePin, OUTPUT);
  pinMode(rodePin, OUTPUT);
  pinMode(groenePin, OUTPUT);
}

void loop()
{
  digitalWrite(gelePin, HIGH);
  digitalWrite(rodePin, HIGH);
  digitalWrite(groenePin, HIGH);
  delay(500);
  digitalWrite(gelePin, LOW);
  digitalWrite(rodePin, LOW);
  digitalWrite(groenePin, LOW);
  delay(500);
}

