// 2024-01-30
// Robotics: 2 Push Button with 3 LEDs (Mastery Exercises 2)
// Circuit ni chat: https://i.imgur.com/FsY9FGP.png
// Github Repository: https://github.com/EmmanuelUniana17/ArduinoProjects

int led1 = 4; // Red LED
int led2 = 3; // Yellow LED
int led3 = 2; // Green LED
int pbutton1 = 5; // Left Button
int pbutton2 = 6; // Right Button
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
  switchStatus1 = digitalRead(pbutton1); // Reads the input of Button 1 (Left) and stores the value in the variable.
  switchStatus2 = digitalRead(pbutton2); // Reads the input of Button 2 (Right) and stores the value in the variable.
  
  if(switchStatus1 == HIGH) { // If Button 1 (Left) is pressed, LED 2 will turn on.
    digitalWrite(led2, HIGH);
  }
  else { // If not, LED 2 will turn off.
    digitalWrite(led2, LOW);
  }

  if(switchStatus2 == HIGH) { // If Button 2 (Right) is pressed, LED 1 and 3 will turn on.
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
  }
  else { // If not, LED 1 and 3 will turn off.
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
  }
} 
