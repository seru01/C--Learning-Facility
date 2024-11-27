#include <Arduino.h>
#include "standard.h"

// Create an instance of MyClass
MyClass myObject;

void setup() {
  // Initialize Serial communication
  Serial.begin(115200);
  DEBUG_PRINTLN("Debugging is enabled");

  // Call the greet function
  greet();

  // Call methods of MyClass
  myObject.myMethod1();
  myObject.myMethod2();
  myObject.myMethod3();
}

void loop() {
  // No repeated actions in this example
}
