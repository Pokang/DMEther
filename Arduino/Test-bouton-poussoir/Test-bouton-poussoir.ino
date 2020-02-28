int pinBouton;
void setup()
{
    Serial.begin(9600);
    pinBouton=7;
    pinMode(7,INPUT_PULLUP);
}
void loop()
{
    boolean etatBouton=digitalRead(pinBouton);
    if(etatBouton==0)
    {
    Serial.println("switch");
    }
}
