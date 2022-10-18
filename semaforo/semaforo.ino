// C++ code
//https://www.tinkercad.com/things/5ICw4A3MEC7

void setup()
{
  
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
}

void loop()
{
  
  digitalWrite(5, LOW);
  digitalWrite(0, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(0, LOW);
  digitalWrite(3, LOW); 
  digitalWrite(4, HIGH);
  //piscada da faixa de pedestre
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);// Wait for 2000 milisecond(s)
  digitalWrite(5, HIGH);
  digitalWrite(4,  LOW);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(7, LOW);  
  digitalWrite(2, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(1, HIGH);
  delay(2000);// Wait for 2000 milisecond(s)
  digitalWrite(1, LOW);
  digitalWrite(7, HIGH);
  delay(2000);
  digitalWrite(6, LOW);
}
