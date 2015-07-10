Enabling the use of the HC-SR04 ultrasonic sensors with the ArduPilot APM.

As summarised and explained [here](http://uknj.github.io/2015/07/09/ardupilots-and-ultrasounds/). This code allows the use of the [HC-SR04](http://www.icstation.com/arduino-ultrasonic-module-sr04-distance-transducer-sensor-p-1389.html#.VJRZ-14MAY) ultrasound sensors, in conjunction with the [LTC2644](http://www.linear.com/product/LTC2644).


## Setup:

1. Take a look at the Ultrasonic.h library {located on [here on Github](https://github.com/JRodrigoTech/Ultrasonic-HC-SR04)} and in the Libs folder. Install the library using the instructions located [here](https://www.arduino.cc/en/guide/libraries).

2. Take a look at the code located in the ArduSound folder (Ardusound.ino), modify the trig and echo pins to match your setup.

3. Modify the PWM pins to something suitable.

4. Build the circuit for the LTC2644 as shown in the [documentation](http://cds.linear.com/docs/en/datasheet/2644f.pdf) - follow the Pin config picture. IN^A and IN^B are the PWM outputs from the Arduino respectively, and V^OUTA and V^OUTB are the pins that will go into the Ardupilot.

More to follow...
