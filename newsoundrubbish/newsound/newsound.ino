//www.elegoo.com
//2016.12.08

int buzzer = 4;//der Pins des angesteckten Summers
void setup()
{
 pinMode(buzzer,OUTPUT);// initialsiert den buzzer als Output
}
void loop()
{
 unsigned char i;

   for(i=0;i<100;i++)
   {
    digitalWrite(buzzer,HIGH);
    delay(1.7035775127768);
    digitalWrite(buzzer,LOW);
    delay(1.7035775127768);//wartet 1ms
    }
    //gibt wieder eine frequenz aus
   
   //gibt eine frequenz aus
   for(i=0;i<100;i++)
   {
    digitalWrite(buzzer,HIGH);
    delay(50);
    digitalWrite(buzzer,LOW);
    delay(50);//wartet 1ms
    }
    //gibt wieder eine frequenz aus
   
    
   
} 
