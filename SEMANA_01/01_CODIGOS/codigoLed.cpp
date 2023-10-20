
const int Led1 = 13;
const int Led2 = 12;
const int Led3 = 11;

void setup()
{
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);

}

void loop()
{
  digitalWrite(Led1, HIGH);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, LOW);
  delay(500);
  
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, HIGH);
  digitalWrite(Led3, LOW);
  delay(500);
  
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, HIGH);
  delay(500);
}