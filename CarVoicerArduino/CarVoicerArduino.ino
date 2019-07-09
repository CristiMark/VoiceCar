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
 if (dataType == BV_INT)
 {
 //Checks the stored value in byteData by getData() and
 //changes the value of the pin
 if (bvSerial.intData > 0){
       bvSerial.sendToBV(bvSerial.intData);
          switch (bvSerial.intData) {
          case 3: //left
            // statements
            break;
          case 4: //right
            // statements
            break;
          case 6: //back
            // statements
            break;
          case 7: //straight
            // statements
            break;
          case 5: //stop
            // statements
            break;
           case 2: //fast
            // statements
            break; 
          case 1: //slow
            // statements
            break;
          default:
            // statements
            break;
          
            }
        }
    }
}
