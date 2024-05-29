const int buzzer = 4;

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(buzzer, HIGH);
  tone(buzzer, 754.66, 2000); // Define o tom do buzzer
}
