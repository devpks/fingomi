/*
 * GalaxyWear : Liquid Galaxy on FingerTips
 * Developed by Praveen Kumar for Liquid Galaxy
 * What it does ?
 * The code first of all is based on 4*4 Keypad Matrix using Conductive thread.
 * This is the basic matrix used in mobile phones and keypads, but with a novel approach, I've used it using conductive thread on a Wearable Glove.
 */

 //Declaring the pins assigned for the keypad
  int r1=14;
  int r2=15;
  int r3=16;
  int r4=17; 
  int c1=18;
  int c2=19;
  int c3=2;
  int c4=3;
  int colm1;
  int colm2;
  int colm3;
  int colm4;
  int pin=6;

void setup() 
  {
    Serial.begin(9600);
    Serial.print("GalaxyWear Starting");
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT); 
  pinMode(r4,OUTPUT);
  pinMode(c1,INPUT);
  pinMode(c2,INPUT);
  pinMode(c3,INPUT);
  pinMode(c4,INPUT);
  pinMode(pin,OUTPUT);
         
    
  }
  
  
void loop() 
  digitalWrite(c1,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(c4,HIGH);

digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  
    digitalWrite(pin,LOW);
  
}
void row2()
{
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
}
void row3()
{
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r4,HIGH);
}
void row4()
{
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
}
void ReadRows()
{ 
  colm1=digitalRead(c1);
  colm2=digitalRead(c2);
  colm3=digitalRead(c3);
  colm4=digitalRead(c4);
}
  row1();
  ReadRows();
  delay(100);

  // If-elseif Statements beginning
  if(colm1==LOW)
         {
           Serial.print("Paris");
                        digitalWrite(pin,HIGH);
             delay(500);
         }
  else if(colm2==LOW)
         {
           Serial.print("Bangkok City");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm3==LOW)
         {
           Serial.print("Jakarta City");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm4==LOW)
        {
          Serial.print("Dhaka City");
          digitalWrite(pin,HIGH);
             delay(500);
        }
        
   row2();
   ReadRows();
   delay(100);
   if(colm1==LOW)
         {
           Serial.print("Washington");
          digitalWrite(pin,HIGH);
             delay(500);   
           
         }
   else if(colm2==LOW)
         {
           Serial.print("Bristol");
            digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm3==LOW)
         {
           Serial.print("Clinton");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm4==LOW)
        {
          Serial.print("B");
          digitalWrite(pin,HIGH);
             delay(500);
        }
   row3();
   ReadRows();
   delay(100);
   if(colm1==LOW)
         {
           Serial.print("Salem");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm2==LOW)
         {
           Serial.print("Fairview");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm3==LOW)
         {
           Serial.print("Greenville");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm4==LOW)
        {
          Serial.print("Hyderabad");
          delay(1000);
        }
 
   if(colm1==LOW)
         {
           Serial.print("Jaipur");
          digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm2==LOW)
         {
           Serial.print("Punjab");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm3==LOW)
         {
           Serial.print("Bangalore");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm4==LOW)
        {
          Serial.print("New Delhi");
          delay(1000);
        } 
}
          
 
