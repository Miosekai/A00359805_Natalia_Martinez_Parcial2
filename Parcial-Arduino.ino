const int Leds[] = {2,3,4,5,6};
const int button = 7;
int state = 0;
bool dir = false;
const byte pinBuzzer = 5;
int light = 255;
byte salida = 10;

void setup()
{
  
  Serial.begin(9600);
  pinMode(buttons[1], INPUT);
  
  pinMode(LED_BUILTIN, OUTPUT);
  
   

   for(int i = 0; i < 5; i++)
  {
    pinMode(Leds[i], OUTPUT); 
  }
    
}

void loop()
{
  /*digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)*/
  
  int= boton digitalRead(2);
  
  pValue = map(analogRead(potentiometer), 0,1023,0,255);
  delay(250);
  Serial.println(pValue);
           
  onLeds();
  Leftbutton();
  analogWrite(pinBuzzer, salida);
}

void onLeds (){
   for(int i = 0; i < 5; i++)
  {
     if (i == posLed){
       analogWrite(Leds[i], light-pValue);}
     else {analogWrite(Leds[i], pValue);}
  }  
}

void Leftbutton () {
 if(digitalRead(buttons[1])==HIGH){
      posLed -= 1;
    if (posLed < 0){
    posLed = 4;
    }
    //Serial.println(posLed);
    delay(200);
  } 
}
