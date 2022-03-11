#include <Arduino.h>
#include <Servo.h>

Servo myservo1; 

/*Servo myservo2;
Servo myservo3;
Servo myservo4;      
*/

int bientro1 = A0; 
int servo1 = 7;  
int giatribientro1;
int vitriservo1;

/*
int bientro2 = A1; 
int servo2 = 8;  
int giatribientro2;
int vitriservo2;

int bientro3 = A2; 
int servo3 = 9;  
int giatribientro3;
int vitriservo3;

int bientro4 = A3; 
int servo4 = 10;  
int giatribientro4;
int vitriservo4;
*/
void setup() 
{
  Serial.begin(9600);
  myservo1.attach(servo1);
  //myservo2.attach(servo2);
  //myservo3.attach(servo3);
  //myservo4.attach(servo4);
}
void loop() 
{

    giatribientro1 = analogRead(bientro1);
    //giatribientro2 = analogRead(bientro2);
    //giatribientro3 = analogRead(bientro3);
    //giatribientro4 = analogRead(bientro4);
    
    vitriservo1 = map(giatribientro1,0,1023,0,180);
    myservo1.attach(7);
    myservo1.write(vitriservo1);
    Serial.print("Goc servo: "); Serial.println(vitriservo1);
    delay(100);
    //myservo1.detach();
    
/*  
    vitriservo2 = map(giatribientro2,0,1023,0,180);
    myservo2.attach(8);
    myservo2.write(vitriservo2);
    delay(200);
    myservo2.detach();


    vitriservo3 = map(giatribientro3,0,1023,0,180);
    myservo3.attach(9);
    myservo3.write(vitriservo3);
    delay(300);
    myservo3.detach();

    vitriservo4 = map(giatribientro4,0,1023,0,180);
    myservo4.attach(10);
    myservo4.write(vitriservo4);
    delay(300);
    myservo4.detach();
    */
}