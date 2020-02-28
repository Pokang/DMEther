#define FLOAT_SENSOR  2     // the number of the pushbutton pin
#define LED           8      // the number of the LED pin

void setup() 
{
  // initialize the pushbutton pin as an input:
  pinMode(FLOAT_SENSOR, INPUT_PULLUP);
  Serial.begin(9600);
  
}

void loop() 
{
  if(digitalRead(FLOAT_SENSOR) == HIGH) 
  {
    Serial.println("Haut");
  } 
  else 
  {
 
   Serial.println("Bas");
  }
}
