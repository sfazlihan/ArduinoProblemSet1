void setup()
{
  for(int i=2; i<=6; i++){
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(int a=2; a<=6; a++){
 	 digitalWrite(a, 1);
 	 delay(500);
   }
  for(int a=6; a>=2; a--){
 	 digitalWrite(a, 0);
 	 delay(500);
   }
}