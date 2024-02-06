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
  switchStatus = digitalRead(tsensor); // Reads the input of Tilt Sensor and stores it in the variable. 
  
  if(switchStatus == LOW) // If Tilt Sensor is LOW, LED 2 turns on. 
  {
    digitalWrite(led1, LOW); // LED 1 Off
    digitalWrite(led2, HIGH); // LED 2 On
    digitalWrite(led3, LOW); // LED 3 Off
  } 
  else // If not, then LEDs 1 and 3 will turn on. 
  {
    digitalWrite(led1, HIGH); // LED 1 On
    digitalWrite(led2, LOW); // LED 2 Off
    digitalWrite(led3, HIGH); // LED 3 On
  }
} 