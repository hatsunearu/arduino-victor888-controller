arduino-victor888-controller
============================

A simple Arduino sketch to control a VEX Pro Victor 888 DC motor controller. 

== Purpose ==
The VEX Pro Victor 888 is a simple PWM DC motor controller designed to drive robot motors. It is used in the FIRST Robotics Competition as one of the recommended motor controller.

The Victor 888 has a nominal motor drive voltage of +12V, and uses +5V PWM signal from, for FRC's purpose, the Digital Sidecart. However, it can theoretically be powered using any microcontroller. If a special purpose arises that the Victor 888 be used outside of the FRC or VEX kits, an Arduino may be used to control the motor controller.

== Waveform ==
The Victor 888 compares the PWM voltage (usually carried by the white/yellow line in most 3 wire PWM cables) with the PWM ground. The PWM protocol, obtained through probing of the output of the Digital Sidecart is detailed below:

* Each PWM period lasts 5 ms.
* The voltage high time is defined as the following, in microseconds: 8x(Duty Cycle) + 1600 , in which Duty Cycle ranges from -100 (full backwards) to +10) (full forwards).
* The rest of the period is voltage low.

== Usage ==
Using a 3 conductor unshrouded PWM wire, connect pin 9 of the Arduino to the signal wire and the Arduino ground to the ground wire. The +5V rail need not be connected, as the Victor 888 does not draw power or reference to it.
Plug in the Arduino to a computer with a USB cable. The driver will start up with the duty cycle as zero. Input numbers between -100 and 100 into a 9600 baud USB serial interface into the Arduino to set the duty cycle.

The specs and manual for the Victor 888 can be found here: http://www.vexrobotics.com/217-2769.html 

== Copyright and Liability ==
This program is in the Public Domain. You may use it however you want, modify it however you want, and redistribute it however you want. Just remember that One Degree North and FRC #4817 will NOT take responsibility of accidental or nonaccidental damages done, such as destroying your VEX Pro or your motor. Make sure you read the Victor 888 manual and specs, and play safe. 
