// 2024-01-30
// Robotics: Tilt Sensor with 1 LED
// Circuit ko: https://i.imgur.com/uHhUH0y.png
// Github Repository: https://github.com/EmmanuelUniana17/ArduinoProjects

int led_yellow = 3; // Yellow LED
int tsensor = 2; // Tilt Sensor
int tiltStatus = 0;

void setup()
{
  pinMode(led_yellow, OUTPUT);
  pinMode(tsensor, INPUT);
}

void loop()
{
  tiltStatus = digitalRead(tsensor); // Will read the input from the Tilt Sensor and stores it in the variable.
  
  if(tiltStatus == LOW) // If the Tilt Status is LOW or FALSE, the LED will not turn on.
  {
    digitalWrite(led_yellow, LOW);
  }
  
  else // If not, then the LED will turn on.
  {
    digitalWrite(led_yellow, HIGH);
  }
}
