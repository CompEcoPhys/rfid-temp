#include <SoftwareSerial.h>
SoftwareSerial mySerial(8, 9); // Tx on board, then RX on board
//TX on board goes to Arduino digital 8, and RX on board goes to arduino digital 9 
void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("Starting...");
}
bool id=true;

void loop()
{
  if(mySerial.available()){
    int c=mySerial.read();
    if(c=='\r'){
      if(id){
        Serial.write("; ");
        mySerial.write("RAT\r");
      }else
        Serial.write("\r\n");
      id=!id;
    }else Serial.write(c);
  }

delay(2000);
//Serial.println("checking again");
  
}
