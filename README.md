arduino-victor888-controller
============================

A simple Arduino sketch to control a VEX Pro Victor 888 DC motor controller. 

##Purpose

The VEX Pro Victor 888 is a simple PWM DC motor controller designed to drive robot motors. It is used in the FIRST Robotics Competition as one of the recommended motor controller.

The Victor 888 has a nominal motor drive voltage of +12V, and uses +5V PWM signal from, for FRC's purpose, the Digital Sidecart. However, it can theoretically be powered using any microcontroller. If a special purpose arises that the Victor 888 be used outside of the FRC or VEX kits, an Arduino may be used to control the motor controller.

##Waveform

The Victor 888 compares the PWM voltage (usually carried by the white/yellow line in most 3 wire PWM cables) with the PWM ground. The PWM protocol, obtained through probing of the output of the Digital Sidecart is detailed below:

* Each PWM period lasts 5 ms.
* The voltage high time is defined as the following, in microseconds: 8x(Duty Cycle) + 1600 , in which Duty Cycle ranges from -100 (full backwards) to +100) (full forwards).
* The rest of the period is voltage low.

##Usage

Using a 3 conductor unshrouded PWM wire, connect pin 9 of the Arduino to the signal wire (usually yellow or white and on the edge) and the Arduino ground to the ground wire (usually black or brown and on the other edge). The red wire, which is the V+ wire, may be not connected. However, if you are having issues (see issue #1), try connecting this wire to the Vdd bus on your Arduino, which should have the same voltage as the maximum voltage of the PWM signal.

Plug in the PWM wire to the Victor 888. Plug in the Arduino to a computer with a USB cable. 
The sketch will initialize with the duty cycle as zero. Input integers between -100 and 100 into a 9600 baud USB serial interface into the Arduino to set the duty cycle.

The specs and manual for the Victor 888 can be found here: http://www.vexrobotics.com/217-2769.html 

##Copyright and Liability

This program is in the Public Domain. You may use it however you want, modify it however you want, and redistribute it however you want. Just remember that One Degree North and FRC #4817 will NOT take responsibility of accidental or nonaccidental damages done, such as destroying your VEX Pro or your motor. Make sure you read the Victor 888 manual and specs, and play safe. 
