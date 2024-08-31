#include "DigiKeyboard.h"

void setup() {
   pinMode(1, OUTPUT);
  DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(300);
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.println("cmd");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   delay(400);
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
 DigiKeyboard.println("color a");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   delay(100);
 
  DigiKeyboard.println("dir/s");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   delay(100);
   DigiKeyboard.sendKeyStroke(KEY_F11);
  // don't need to set anything up to use DigiKeyboard
   DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  delay(300);
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.println("cmd");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   delay(400);
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
 DigiKeyboard.println("color fa");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   delay(100);
 
  DigiKeyboard.println("dir/s");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   delay(100);

  // don't need to set anything up to use DigiKey
  // don't need to set anything up to use DigiKey
}


void loop() {
   digitalWrite(1, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(70);                      // wait for a second
  digitalWrite(1, LOW);   // turn the LED off by making the voltage LOW
  delay(70);                 // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:

}
