int led1 = 3;
int led2 = 4;
int led3 = 5;
int pbutton = 2;
int switchStatus = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(pbutton, INPUT);
}

void loop()
{
  switchStatus = digitalRead(pbutton);
  
  if(switchStatus == LOW)
  {	
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  else
  {
  	digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  delay(250);
}