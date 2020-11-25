# Stepper Motor Speed Record

You can see it in action in my video here (under progress): https://www.youtube.com/channel/UCbziPtOjqu3OHrNleWjq9dg?view_as=subscriber

 With these codes you can accelerate a NEMA 17 stepper motor above 9000 RPM.
 The motor runs in full-step mode.
 
 The minimum time between two steps in my case is 16 microsec.

- The 'Stpm_acceleration' code only accelerates the motor, than runs on that speed.
- The 'Stpm_acceleration-deacceleration', accelerates the motor, than deaccelerates, to the given speed, than start it again forever.

Electrical components I used:

- 42HM48-1684A 0,9° step angle
- Arduino UNO
- DRV8825 stepper motor driver, in full-step mode
