void setup()
{
    pinMode(2,OUTPUT);
    pinMode(9,INPUT);
  
}

void loop()
{
 int status = 1;
 status = digitalRead(9);
  if (status == 1){
    digitalWrite(2,HIGH);
  } else {
    digitalWrite(2,LOW);
  }
}