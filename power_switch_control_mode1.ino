int ledPin =13;
int buttonPin = 12;
int buttonState =0;
int lastbuttonState = LOW;
int ledState = LOW;
void setup()
{
  pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT);

}

void loop(){
int buttonState =digitalRead(buttonPin);
  if (buttonState!=lastbuttonState){
    lastbuttonState=buttonState;
      if (buttonState==HIGH){
            ledState = (ledState == HIGH)? LOW: HIGH;
    
      
    digitalWrite(ledPin, ledState);
  }
 }  
}