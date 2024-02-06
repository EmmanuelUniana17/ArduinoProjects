int led1 = 4;
int led2 = 3;
int led3 = 2;
int tsensor = 5;
int switchStatus = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(tsensor, INPUT);
}

void loop()
{
  switchStatus = digitalRead(tsensor);
  
  if(switchStatus == LOW)
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  } 
  else
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  }
} 