void setup()
{
for( int i = 0; i<= 12
 ; i++)
{ 
  pinMode(i,OUTPUT);
} 
  
}

void loop()
{
 for( int i = 0; i<= 12 ; i++)
{ 
   digitalWrite(i,HIGH);
   tone(9,100*i,1000);
   delay( analogRead(A0) );
   digitalWrite(i,LOW);
 }  
}


