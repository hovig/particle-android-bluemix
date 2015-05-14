Part 1 - Particle Core:

N.B: Spark is now called Particle, company name has changed.

You need to create an account with https://particle.io to connect your Particle Core device to Web IDE. It's better to 
be familiar with Particle related subjects to be able to connect and flash your Particle core.

You can write code on https://build.particle.io/build/new. Basically, copy/paste the code in Particle Core/particleled.ino 
into the Web IDE, compile and then flash it into your device.

In order for you to connect your Particle Core to the WiFi network, there are 2 ways for doing that 
(http://docs.particle.io/start/):

1) you can download Particle Core app, sign in, type SSID and password to connect to the WiFi, then it will find 
   your device. Name it or keep what by default is named.
   
2) you can use putty.exe for Windows (download it from putty.org) and choose Serial radio button and make sure 
   to write the correct COM port and click OK.
   
	While Putty doesn't display anything yet, just press w on your keyboard and type SSID, then password and 
	the device will be connected.
	
*To note that the code for Particle core states D0 to write On or Off commands. Place the LED at D0 and GND.
http://www.codeproject.com/Articles/840416/Stage-Getting-started-with-Spark-Core
