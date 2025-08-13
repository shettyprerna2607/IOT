int led[] = {2,3,4,5,6,7};
void setup()
{
  for (int i = 0; i < 7; i = i + 2){
    pinMode(led[i],OUTPUT);
  }
}

void loop()
{
  for (int i = 0; i < 7; i = i + 2){
  digitalWrite(led[i], HIGH);
  delay(500); 
  digitalWrite(led[i], LOW);
  delay(200);
  }
  
   for (int i = 7; i > 0; i = i - 2){
  digitalWrite(led[i], HIGH);
  delay(500); 
  digitalWrite(led[i], LOW);
  delay(200); 
  }
}