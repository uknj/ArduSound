Enabling the use of the HC-SR04 ultrasonic sensors with the ArduPilot APM.

As summarised and explained [here](http://uknj.github.io/2015/07/09/ardupilots-and-ultrasounds/). This code allows the use of the [HC-SR04](http://www.icstation.com/arduino-ultrasonic-module-sr04-distance-transducer-sensor-p-1389.html#.VJRZ-14MAY) ultrasound sensors, in conjunction with the [LTC2644](http://www.linear.com/product/LTC2644).


## Setup:

1. Take a look at the Ultrasonic.h library {located on [here on Github](https://github.com/JRodrigoTech/Ultrasonic-HC-SR04)} and in the Libs folder. Install the library using the instructions located [here](https://www.arduino.cc/en/guide/libraries).

2. Take a look at the code located in the ArduSound folder (Ardusound.ino), modify the trig and echo pins to match your setup.

3. Modify the PWM pins to something suitable.

4. Build the circuit for the LTC2644 as shown in the [documentation](http://cds.linear.com/docs/en/datasheet/2644f.pdf) - follow the Pin config picture. IN^A and IN^B are the PWM outputs from the Arduino respectively, and V^OUTA and V^OUTB are the pins that will go into the Ardupilot. NB: I could only get one of the ultrasound sensors to actually communicate with the APM, however both do output steady voltage.

5. Plug in the V^OUT into the APM as shown [here](http://copter.ardupilot.com/wiki/common-optional-hardware/common-rangefinder-landingpage/sonar/#connecting_the_sonar_sensor_on_apm_2x), where the Voltage and Ground are your standard voltage ground connections on the Arduino and Pin 3 is the V^OUT.

6. Upload the code to the Arduino and plug in the power sources and USB connection to the APM as well.

7. Adjust the parameters for the APM.

9. ENJOY :D

TODO: Add list of parameters used and provide info on modification.
