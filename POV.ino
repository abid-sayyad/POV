#include "POV_Char.h"
  const int LEDpins[] = {2,8,7,6,5,4,3,9};
  int rows= 8;		  
   const int charHeight = 8;
   const int charWidth = 5;
  const int sensorPIN = 10;
  int sensVal;
  int i;
  char textString[] = "Abidarian";
  String tmp_str;
  
  void setup()
  {
    setTime(12,00,00,16,06,2003);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, INPUT);
    for (i = 0; i < rows; i++)
      pinMode(LEDpins[i], OUTPUT);    
   
  }
  
  void loop()
  {
      
    
    tmp_str=klok();
    tmp_str=tmp_str+" ";
    while(digitalRead(sensorPIN) != 0)
    {
     digitalWrite(13, LOW); 
    }
    digitalWrite(13, HIGH);   
    for (int k=0; k<tmp_str.length(); k++){
      printLetter(tmp_str.charAt(k));
      }
    delay(2);  
    for (int k=sizeof(textString)-1; k>-1; k--){
      printLetterboven(textString[k]);
      }  
  }
  
  String klok(){
    String result;
    String str1;
    String str2;
    String str3;
    if (hour() < 10)
      str1 = "0"+String(hour());
    else
      str1 = String(hour());
    if (minute() < 10)
      str2 = "0"+String(minute());
    else
      str2 = String(minute());
    if (second() < 10)
      str3 = "0"+String(second());
    else
      str3 = String(second());
    result = str1+":"+str2+":"+str3;
    return result;
  }
  
void printLetterboven(char ch)
  {
    
    if (ch < 32 || ch > 126){
      ch = 32;
      }
    ch -= 32;
    for (int i=charWidth-1; i>-1; i--) {
      byte b = font[ch][i];
      for (int j=0; j<charHeight; j++) {
        digitalWrite(LEDpins[j], bitRead(b,j));
        }
      delay(1);
      }
    for (i = 0; i < rows; i++)
      digitalWrite(LEDpins[i] , LOW);
    delay(1);
  
  }  
  
  void printLetter(char ch)
  {
    if (ch < 32 || ch > 126){
      ch = 32;
      }
    ch -= 32;
    for (int i=0; i<charWidth; i++) {
      byte b = font[ch][i];
      for (int j=0; j<charHeight; j++) {
        digitalWrite(LEDpins[j], bitRead(b, 7-j));
        }
      delay(1);
      }
    for (i = 0; i < rows; i++)
      digitalWrite(LEDpins[i] , LOW);
    delay(1);
  
  }
