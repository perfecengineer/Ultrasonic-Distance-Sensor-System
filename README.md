Title: Ultrasonic Distance Sensor System with ATmega32

Description:

This embedded system project focuses on developing an ultrasonic distance sensor system using the ATmega32 microcontroller. The system measures distances using an ultrasonic sensor and displays the measured distance on an LCD. Additionally, it provides real-time monitoring of the status of echo pulses through an oscilloscope for precise analysis and diagnostics.

Components:

ATmega32 Microcontroller: The ATmega32 serves as the central processing unit to control the system, process sensor data, and interface with peripherals.

Ultrasonic Sensor: An ultrasonic sensor (e.g., HC-SR04) is used to send ultrasonic pulses and receive echo signals to measure distances.

LCD Display: An LCD screen is employed to visualize and display the measured distance.

Oscilloscope: An oscilloscope is connected to the microcontroller to monitor and analyze the status of the echo pulses.

Input Capture Unit in Timer 1 Peripheral: The Input Capture Unit in Timer 1 peripheral of the ATmega32 is utilized to accurately measure the time between the trigger pulse and the echo pulse from the ultrasonic sensor.

Functionality:

Distance Measurement: The ultrasonic sensor emits ultrasonic pulses and calculates the distance to an object by measuring the time it takes for the echo signals to return.

LCD Display: The measured distance is displayed on the LCD in real-time, providing a visual representation of the object's distance from the sensor.

Oscilloscope Monitoring: The oscilloscope is connected to the microcontroller, allowing you to monitor and analyze the echo pulses' status, which can be useful for diagnostics and fine-tuning the system.

Input Capture Unit: The Input Capture Unit in Timer 1 peripheral captures the exact time of the rising edge of the echo pulse, enabling precise distance calculations
