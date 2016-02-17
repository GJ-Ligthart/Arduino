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
  delay(1000);
  digitalWrite(gelePin, LOW);
 
  digitalWrite(rodePin, HIGH);  
  delay(1000);
  digitalWrite(rodePin, LOW);
 
  digitalWrite(groenePin, HIGH);
  delay(1000);
  digitalWrite(groenePin, LOW);
}

