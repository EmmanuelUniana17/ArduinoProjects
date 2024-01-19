// kinopya ko po ito kay emman
// Declaring each LED variables.
int led_red = 2;
int led_yellow = 3;
int led_green = 4;
int led_blue1 = 5;
int led_blue2 = 6;
int led_blue3 = 7;

void setup()
{
  // Setup all LEDs as Output
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_blue1, OUTPUT);
  pinMode(led_blue2, OUTPUT);
  pinMode(led_blue3, OUTPUT);
}

// kinopya ko po ito kay emman

void loop()
{
  // All LEDs turn on with 1 second delay each.
  digitalWrite(led_blue1, HIGH);
  delay(1000);
  digitalWrite(led_blue2, HIGH);
  delay(1000);
  digitalWrite(led_blue3, HIGH);
  delay(1000);
  digitalWrite(led_red, HIGH);
  delay(1000);
  
  // Turn off all LEDs for 2 seconds.
  digitalWrite(led_blue1, LOW);
  digitalWrite(led_blue2, LOW);
  digitalWrite(led_blue3, LOW);
  digitalWrite(led_red, LOW);
  delay(2000);
  
  // All LEDs turn on with 1 second delay each.
  digitalWrite(led_blue1, HIGH);
  delay(1000);
  digitalWrite(led_blue2, HIGH);
  delay(1000);
  digitalWrite(led_blue3, HIGH);
  delay(1000);
  digitalWrite(led_yellow, HIGH);
  delay(1000);
  
  // Turn off all LEDs for 2 seconds.
  digitalWrite(led_blue1, LOW);
  digitalWrite(led_blue2, LOW);
  digitalWrite(led_blue3, LOW);
  digitalWrite(led_yellow, LOW);
  delay(2000);
  
  // All LEDs turn on with 1 second delay each.
  digitalWrite(led_blue1, HIGH);
  delay(1000);
  digitalWrite(led_blue2, HIGH);
  delay(1000);
  digitalWrite(led_blue3, HIGH);
  delay(1000);
  digitalWrite(led_green, HIGH);
  delay(1000);
  
  // Turn off all LEDs for 2 seconds.
  digitalWrite(led_blue1, LOW);
  digitalWrite(led_blue2, LOW);
  digitalWrite(led_blue3, LOW);
  digitalWrite(led_green, LOW);
  delay(2000);
}
// kinopya ko po ito kay emman