void setup()
{
 
  for( int i = 2; i<= 8 ; i++)
   { 
    pinMode(i,OUTPUT);
   } 
  
}

void loop()
{
 
 for( int i = 2; i<= 8 ; i++)
  { 
   digitalWrite(i,HIGH);
   delay(analogRead(A0);
   digitalWrite(i,LOW);
  }
  
}


