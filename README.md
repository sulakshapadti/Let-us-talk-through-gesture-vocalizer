# Let-us-talk-through-gesture-vocalizer

Team members:
Thejaswii S Acharya,
Vaibhavi V Badiger,
Yashaswini M,
Sulaksha Sayeesh Padti.

Under the guidance of:
Prof. Prasad A M, Assistant Professor, CSE, DSCE Bangalore. 
and 
Mr. Sumit Sagar, Co-Guide, Walmart-Retail.

"Let us talk through gesture vocalizer" is an IoT-based project Which Recognizes Sign language gestures and produces output in the form of text and voice using the mobile application.

Hardware Connection:

Attach Copper sheets to each fingertip and place jumper wires on each finger.

1} Arduino Nano:

Thumb finger - GND

Index finger - A0

Middle finger - A1

Ring finger -A2

Pinky finger - A3

2} Accelerometer(ADXL335}:

X-pin - A5

Y-pin - A6

Z-pin - A7

VCC   - 5v

GND   - GND

3)Bluetooth Module(HC-05):

Arduino Nano TX pin - RX pin

VCC  - SV

GND   - GND

Steps:
1) First we require hardware like Arduino Naano, Accelerometer(ADXL335), a Bluetooth module(HC_05), Copper sheets, Jumper wires, and a Hand glove.
2) Connect the Hardware as shown in the circuit diagram.
3) Code the Arduino Nano using Arduino IDE.
4) Compile and upload the code into Arduino Nano.
5) In your Android device turn on Bluetooth.
6) Pair the Bluetooth module(HC-05) to your device using password "1234" or "0000".
7) Download and install Android App "Arduino Bluetooth Text to Speech" apk file on your device.
8) Power on the device.
9) Open the Android App on your Android device.
10) Connect the Bluetooth module. i.e. HC-05. by clicking on the option HC-05.
11) Connect any fingers to the thumb finger, displaying the corresponding output in the corresponding axis i.e. X-axis, Y-axis, Z-axis.
