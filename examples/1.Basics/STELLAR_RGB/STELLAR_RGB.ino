///
/// @mainpage	StellarPad RGB LEDs demonstration
/// @details	This sketch displays the following colours:
/// *	red
/// *	yellow = red + green
/// *	green
/// *	cyan = blue + green
/// *	blue
/// *	violet = red + blue
/// *	white = red + green + blue
/// *   black = 0
/// @n 
/// @n @a	Developed with [embedXcode](http://embedXcode.weebly.com)
///
/// @author	Rei VILO
/// @author	http://embedxcode.weebly.com
/// @date	Nov 02, 2012
/// @version	102
///
/// @copyright	© Rei VILO, 2012
/// @copyright	CC = BY NC SA
///
/// @see	ReadMe.txt for references
///


///
/// @file	Stellar_RGB_embedXcode.ino
/// @brief	Main sketch
/// @details	StellarPad RGB LEDs demonstration
/// @n @a	Developed with [embedXcode](http://embedXcode.weebly.com)
///
/// @author	Rei VILO
/// @author	http://embedxcode.weebly.com
/// @date	Nov 02, 2012
/// @version	102
///
/// @copyright	© Rei VILO, 2012
/// @copyright	CC = BY NC SA
///
/// @see	ReadMe.txt for references
/// @n
///



// Core library - MCU-based 
#if defined(__LM4F120H5QR__)  // StellarPad specific
#include "Energia.h"
#else // error
#error SteallarPad only. Platform not compatible
#endif

// Include application, user and local libraries

// Define variables and constants


///
/// @brief	Setup
///
// Add setup code
void setup() {
  // initialise digital pins as outputs
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  
  digitalWrite(RED_LED, HIGH);
  delay(1000);
  digitalWrite(RED_LED, LOW);
  
  digitalWrite(GREEN_LED, HIGH);
  delay(1000);
  digitalWrite(GREEN_LED, LOW);
  
  digitalWrite(BLUE_LED, HIGH);
  delay(1000);
  digitalWrite(BLUE_LED, LOW);
  
  delay(1000);
}

///
/// @brief	Loop
///
// Add loop code
void loop() {
  digitalWrite(RED_LED, HIGH);
  delay(1000);
  digitalWrite(GREEN_LED, HIGH);
  delay(1000);
  digitalWrite(RED_LED, LOW);
  delay(1000);
  digitalWrite(BLUE_LED, HIGH);
  delay(1000);
  digitalWrite(GREEN_LED, LOW);
  delay(1000);
  digitalWrite(RED_LED, HIGH);
  delay(1000);
  digitalWrite(BLUE_LED, LOW);
  delay(1000);
  digitalWrite(RED_LED, LOW);
  delay(1000);
  
  digitalWrite(BLUE_LED, HIGH);
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, HIGH);
  delay(333);
  digitalWrite(BLUE_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(RED_LED, LOW);
  delay(333);
  digitalWrite(BLUE_LED, HIGH);
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, HIGH);
  delay(333);
  digitalWrite(BLUE_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(RED_LED, LOW);
  delay(333);
  digitalWrite(BLUE_LED, HIGH);
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, HIGH);
  delay(333);
  digitalWrite(BLUE_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(RED_LED, LOW);
  delay(1000);
  
  
}


