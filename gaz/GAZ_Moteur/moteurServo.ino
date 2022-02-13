
  // C++ code
//
#include <Servo.h>
Servo monServomoteur;
int SM =13;
void setup()
{
   monServomoteur.attach(13);
}

void loop()
{
   // Fait bouger le bras de 0° à 180°
  for (int position = 0; position <= 180; position++) {
    monServomoteur.write(position);
    delay(15);
  }
  
  // Fait bouger le bras de 180° à 10°
  for (int position = 180; position >= 0; position--) {
    monServomoteur.write(position);
    delay(15);
  }
}
