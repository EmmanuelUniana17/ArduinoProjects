// 2024-01-30
// Robotics: 2 Push Button with 3 LEDs (Mastery Exercises 2)
// Circuit ko: https://imgur.com/FsY9FGP

int led1 = 4;
int led2 = 3;
int led3 = 2;
int pbutton1 = 5;
int pbutton2 = 6;
int switchStatus1 = 0;
int switchStatus2 = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(pbutton1, INPUT);
  pinMode(pbutton2, INPUT);
}

void loop()
{
  switchStatus1 = digitalRead(pbutton1);
  switchStatus2 = digitalRead(pbutton2); 
  
  if(switchStatus1 == HIGH) {
    digitalWrite(led2, HIGH);
  }
  else {
    digitalWrite(led2, LOW);
  }

  if(switchStatus2 == HIGH) {
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
  }
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
  }
} 
