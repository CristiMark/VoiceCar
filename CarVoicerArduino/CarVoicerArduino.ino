//Imports the BitVoicer library to the sketch
#include <BitVoicer11.h>
//Instantiates the BitVoicerSerial class
BitVoicerSerial bvSerial = BitVoicerSerial();
//Stores the data type retrieved by getData()
byte dataType = 0;
//Stores the state of pin 4
byte pinVal = 0;
void setup()
{
 //Starts serial communication at 9600 bps
 Serial.begin(9600);
 //Sets digital pin 4 as OUTPUT
 pinMode(4, OUTPUT);
 //Turns off pin 4
 digitalWrite(4, pinVal);
}
void loop()
{
 //Updates the state of pin 4 on every loop
 digitalWrite(4, pinVal);
}
//This function runs every time serial data is available
//in the serial buffer after a loop
void serialEvent()
{
 //Reads the serial buffer and stores the received data type
 dataType = bvSerial.getData();

 //Checks if the data type is the same as the one in the
 //Voice Schema
 if (dataType == BV_STR)
 {
 //Checks the stored value in byteData by getData() and
 //changes the value of the pin
 if (bvSerial.strData.length() > 0){

          svSerial.sendToBV(bvSerial.strData);
          switch (bvSerial.strData) {
          case "stanga":
            // statements
            break;
          case "dreapta":
            // statements
            break;
          case "spate":
            // statements
            break;
          case "fata":
            // statements
            break;
          case "stop":
            // statements
            break;
           case "incet":
            // statements
            break; 
          case "repede":
            // statements
            break;
          default:
            // statements
            break;
          
            }
        }
    }
}
