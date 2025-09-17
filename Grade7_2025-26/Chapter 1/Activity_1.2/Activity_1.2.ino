// Define input pins for Motor 1
const int input11 = 7;
const int input12 = 8;
// Define input pins for Motor 2
const int input21 = 9;
const int input22 = 10;
// Define enable (PWM) pins for Motor 1 and Motor 2
const int enable1 = 3;
const int enable2 = 5;

void setup()
{
  // Set motor input pins as output
  pinMode(input11, OUTPUT);
  pinMode(input12, OUTPUT);
  pinMode(input21, OUTPUT);
  pinMode(input22, OUTPUT);
  // Set enable pins as output
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);
}
void loop()
{
  // Set PWM signal to ~75% (191 out of 255) for both motors
  // Motor 1 will run at ~75% speed
  analogWrite(enable1, 191);
  // Motor 2 will run at ~75% speed
  analogWrite(enable2, 191);
  // Set Motor 1 to move forward (clockwise)
  // input11 = HIGH, input12 = LOW
  digitalWrite(input11, HIGH);
  digitalWrite(input12, LOW);
  // Set Motor 2 to move forward (clockwise)
  // input21 = HIGH, input22 = LOW
  digitalWrite(input21, HIGH);
  digitalWrite(input22, LOW);
  // Run both motors forward for 3 seconds
  delay(3000);
  // Stop both motors by setting inputs to LOW
  digitalWrite(input11, LOW);
  digitalWrite(input12, LOW);
  digitalWrite(input21, LOW);
  digitalWrite(input22, LOW);
}

