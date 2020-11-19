#define LedS1V 10

void setup(){
 pinMode(LedS1V, OUTPUT);
 Serial.begin(9600);
 Serial.println("Startup"); 
}

#define VIIVE 20

byte teho=0;
bool countUp = true;

void loop(){
  analogWrite(LedS1V, teho);
  if( countUp == true ){
    teho++;//Kasvata muuttujan arvo yhdellä
  }else{
    teho--;//Pienennä muuttujan arvoa yhdellä
  }
  if ( teho == 255 ) {
    countUp = false;
    Serial.println("Count down");
  }
  if ( teho == 0 ) {
    countUp = true;
    Serial.println("Count up");
  }
  delay(VIIVE);
}
