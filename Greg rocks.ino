void setup()
{
for( int i = 1; i<= 8
 ; i++)
{ 
  pinMode(i,OUTPUT);
} 
  
}

void loop()
{
 for( int i = 1; i<= 8 ; i++)
{ 
   digitalWrite(i,HIGH);
   delay(2000);
   digitalWrite(i,LOW);
 }  
}
