void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(11, HIGH);
  delay(4000); 
  digitalWrite(2, LOW);
  digitalWrite(11, LOW);
  
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  
  digitalWrite(3, HIGH);
  digitalWrite(9, HIGH);
  delay(4000); 
  digitalWrite(3, LOW);
  digitalWrite(9, LOW);
  
}