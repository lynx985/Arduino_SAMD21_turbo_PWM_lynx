// Uses a pin and writes a 50% duty cycle, 24 kHz Signal on that

#include <SAMD21turboPWM.h>

TurboPWM pwm;
const int TestPin = 5; // change pin number to your liking

void setup() {
  pwm.setClockDivider(1, true);     // Input clock is divided by 1 and sent to Generic Clock, Turbo is On
  pwm.timer(2, 1, 4000, true);  // Timer 2 is set to Generic Clock divided by 1, resolution is 4000, normal... 
  pwm.timer(1, 1, 4000, true);       // Timer 1 is set to Generic Clock divided by 1, resolution is 4000, normal aka fast aka single-slope PWM
  pwm.timer(0, 1, 4000, true);       // Timer 0 is set to Generic Clock divided by 1, resolution is 4000, normal aka fast aka single-
 
 
}

void loop() {
  pwm.analogWrite(TestPin, 500);
  delay(100);
}
