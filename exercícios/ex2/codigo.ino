// C++ code
//
void setup()
{
  
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop()
{
  PiscaLedVermelho12();
  PiscaLedVermelho13();

}
void PiscaLedVermelho13()
{
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(100);
  }
void PiscaLedVermelho12()
{
  digitalWrite(12,HIGH);
  delay(100);
  digitalWrite(12, LOW);
  delay(100);
  }
