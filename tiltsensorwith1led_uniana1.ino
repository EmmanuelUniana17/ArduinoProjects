int led_yellow = 3;
int tsensor = 2;
int tiltStatus = 0;

void setup()
{
  pinMode(led_yellow, OUTPUT);
  pinMode(tsensor, INPUT);
}

void loop()
{
  tiltStatus = digitalRead(tsensor);
  
  if(tiltStatus == LOW)
  {
    digitalWrite(led_yellow, LOW);
  }
  
  else
  {
    digitalWrite(led_yellow, HIGH);
  }
}