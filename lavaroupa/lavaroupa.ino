// C++ code
//
#include <LiquidCrystal.h>
int seconds = 0;
LiquidCrystal lcd_1(13, 12, 11, 10, 9, 8);

void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  
  //ENCHENDO;
  lcd_1.print("Enchendo");
  digitalWrite(0, HIGH); // Liga a Válvula de Entrada de Água
  lcd_1.setCursor(8, 0);
  lcd_1.print(".");
  delay(1000);
  lcd_1.setCursor(9, 0);
  lcd_1.print(".");
  delay(1000);
  lcd_1.setCursor(10, 0);
  lcd_1.print(".");
  digitalWrite(0, LOW); // Desliga a Válvula de Entrada de Água
  delay(1000);
  //Espera 3 Segundos
  
  
    
  //BATENDO;
  lcd_1. clear();
  lcd_1.print("Batendo");
  digitalWrite(1, HIGH); // Ligar motor no sentido horário
  delay(5000); //Espera 5 Segundos para mover a roupa
  digitalWrite(1, LOW); // Desligar motor no sentido horário
  lcd_1.setCursor(7, 0);
  lcd_1.print(".");
   
  digitalWrite(2, HIGH); // Ligar motor no sentido anti-horário
  delay(5000); //Espera 5 Segundos para mover a roupa
  digitalWrite(2, LOW);// Desligar motor no sentido anti-horário
  lcd_1.setCursor(8, 0);
  lcd_1.print(".");
  
   digitalWrite(1, HIGH); // Ligar motor no sentido horário
  delay(5000); //Espera 5 Segundos para mover a roupa
  digitalWrite(1, LOW); // Desligar motor no sentido horário
  lcd_1.setCursor(9, 0);
  lcd_1.print(".");
   
  digitalWrite(2, HIGH); // Ligar motor no sentido anti-horário
  delay(5000); //Espera 5 Segundos para mover a roupa
  digitalWrite(2, LOW); // Desligar motor no sentido anti-horário
  lcd_1.setCursor(10, 0);
  lcd_1.print(".");
   digitalWrite(1, HIGH); // Ligar motor no sentido horário
  delay(5000); //Espera 5 Segundos para mover a roupa
  digitalWrite(1, LOW); // Desligar motor no sentido horário
    lcd_1.setCursor(11, 0);
  lcd_1.print(".");
   
  digitalWrite(2, HIGH); // Ligar motor no sentido anti-horário
  delay(5000); //Espera 5 Segundos para mover a roupa
  digitalWrite(2, LOW); // Desligar motor no sentido anti-horário
    lcd_1.setCursor(12, 0);
  lcd_1.print(".");
   digitalWrite(1, HIGH); // Ligar motor no sentido horário
  delay(5000); //Espera 5 Segundos para mover a roupa
  digitalWrite(1, LOW); // Desligar motor no sentido horário
    lcd_1.setCursor(13, 0);
  lcd_1.print(".");
   
  digitalWrite(2, HIGH); // Ligar motor no sentido anti-horário
  delay(5000); //Espera 5 Segundos para mover a roupa
  digitalWrite(2, LOW); // Desligar motor no sentido anti-horário
    lcd_1.setCursor(14, 0);
  lcd_1.print(".");

// ESVAZIANDO
   lcd_1. clear();
  lcd_1.print("Molho");
  delay(5000);
  lcd_1.setCursor(6, 0);
  lcd_1.print(".");
  delay(5000);
  lcd_1.setCursor(7, 0);
  lcd_1.print(".");
  delay(5000);
  lcd_1.setCursor(8, 0);
  lcd_1.print(".");
  delay(5000);
  lcd_1.setCursor(9, 0);
  lcd_1.print(".");
  delay(5000);
  lcd_1.setCursor(10, 0);
  lcd_1.print(".");
  delay(5000);
  lcd_1.setCursor(11, 0);
  lcd_1.print(".");
  delay(5000);
  lcd_1.setCursor(12, 0);
  lcd_1.print(".");
  //tempo de molho
  digitalWrite(3, HIGH); // Liga a Bomba de Água
   lcd_1. clear();
   delay(3333); // tempo de espera de 3,333 segundos
  digitalWrite(3, LOW); // Desliga a Bomba de Água
}//FECHA 

void loop()
{

  
}