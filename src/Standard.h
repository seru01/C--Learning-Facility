#ifndef STANDARD_H
#define STANDARD_H

//Libraries 
#include <Arduino.h>

//Debugging
#define DEBUG_MODE 0


// Function declaration
void greet();

// Class definition
class MyClass {
  public:
    void myMethod1();
    void myMethod2();
    void myMethod3();
};

#if DEBUG_MODE
  #define DEBUG_PRINT(x) Serial.print(x)
  #define DEBUG_PRINTLN(x) Serial.println(x)
#else
  #define DEBUG_PRINT(x)  
  #define DEBUG_PRINTLN(x)  
#endif

#endif 
