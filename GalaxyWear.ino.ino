

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
           Serial.print("ToneA");
                        digitalWrite(pin,HIGH);
             delay(500);
         }
  else if(colm2==LOW)
         {
           Serial.print("ToneB");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm3==LOW)
         {
           Serial.print("ToneC");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm4==LOW)
        {
          Serial.print("ToneD");
          digitalWrite(pin,HIGH);
             delay(500);
        }
        
   row2();
   ReadRows();
   delay(100);
   if(colm1==LOW)
         {
           Serial.print("ToneE");
          digitalWrite(pin,HIGH);
             delay(500);   
           
         }
   else if(colm2==LOW)
         {
           Serial.print("ToneF");
            digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm3==LOW)
         {
           Serial.print("ToneG");
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
           Serial.print("ToneJ");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm2==LOW)
         {
           Serial.print("ToneK");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm3==LOW)
         {
           Serial.print("ToneL");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm4==LOW)
        {
          Serial.print("ToneP");
          delay(1000);
        }
 
   if(colm1==LOW)
         {
           Serial.print("ToneZ");
          digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm2==LOW)
         {
           Serial.print("ToneX");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm3==LOW)
         {
           Serial.print("ToneY");
           digitalWrite(pin,HIGH);
             delay(500);
         }
   else if(colm4==LOW)
        {
          Serial.print("ToneT");
          delay(1000);
        } 
}
          
 
