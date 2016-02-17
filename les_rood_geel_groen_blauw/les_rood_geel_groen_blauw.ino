int rodePin = 11;
int gelePin = 10;
int groenePin = 9;
int blauwePin = 8;


void setup()
{
  pinMode(rodePin, OUTPUT);
  pinMode(gelePin, OUTPUT);
  pinMode(groenePin, OUTPUT);
  pinMode(blauwePin, OUTPUT);
}

void loop()
{
  digitalWrite(rodePin, HIGH);  
  delay(500);
  digitalWrite(rodePin, LOW);
  
  digitalWrite(gelePin, HIGH); 
  delay(500);
  digitalWrite(gelePin, LOW);
 
  digitalWrite(groenePin, HIGH);
  delay(500);
  digitalWrite(groenePin, LOW);

  digitalWrite(groenePin, HIGH);
  digitalWrite(blauwePin, HIGH);
  delay(500);
  digitalWrite(groenePin, LOW);
  digitalWrite(blauwePin, LOW);

  digitalWrite(blauwePin, HIGH);
  delay(500);
  digitalWrite(blauwePin, LOW);

  digitalWrite(rodePin, HIGH); 
  digitalWrite(blauwePin, HIGH); 
  delay(500);
  digitalWrite(rodePin, LOW);
  digitalWrite(blauwePin, LOW);
}

