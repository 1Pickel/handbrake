
#include <Keyboard.h>

#define BUTTON_PIN 3
#define BUTTON_PIN 4
#define BUTTON_PIN 5

void setup() {
pinMode(3,INPUT_PULLUP);  // sets pin 3 to input & pulls it high w/ internal resistor
pinMode(4,INPUT_PULLUP);  // sets pin 4 to input & pulls it high w/ internal resistor
pinMode(5,INPUT_PULLUP);  // sets pin 5 to input & pulls it high w/ internal resistor
Serial.begin(9600);       // begin serial comms for debugging

}


void loop() {
  
  
 Keyboard.begin();          
 if (digitalRead(3) == 0)  
  {
    Keyboard.write('o');  
    delay(300);           
  }
  else if (digitalRead(4) == 0){ 
    Keyboard.write('p'); 
    delay(200);
    
}
  else if (digitalRead(5) == 0){  
    Keyboard.write('l');      
    delay(300);
  }
  Keyboard.end();   
}
