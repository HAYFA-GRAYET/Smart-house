int gaz=A2;
int ledred=2;
int ledvert=3;
int buzzer=4;
int valeur;
void setup()
{
  pinMode(gaz, INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(ledred,OUTPUT);
  pinMode(ledvert,OUTPUT);
  Serial.begin(9600);
 
}

void loop()
{
  valeur = analogRead(gaz);
     if (valeur>650)
     {
       digitalWrite(ledred,HIGH);
       // turn off tone function for pin 8:
  noTone(buzzer);
  // play a note on pin 6 for 200 ms:
  tone(buzzer, 440, 200);
  delay(200);

  // turn off tone function for pin 6:
  noTone(buzzer);
  // play a note on pin 7 for 500 ms:
  tone(buzzer, 494, 500);
  delay(500);

  // turn off tone function for pin 7:
  noTone(buzzer);
  // play a note on pin 8 for 300 ms:
  tone(buzzer, 523, 300);
  delay(300);
       digitalWrite(ledvert,LOW);
     }
  else {
        digitalWrite(ledvert,HIGH);
        noTone(buzzer);
        digitalWrite(ledred,LOW);
     }  
  Serial.println (analogRead(gaz));
}
