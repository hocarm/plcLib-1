#define noPinDefs         // Disable default pin definitions (X0, X1, ..., Y0, Y1, ...)
#include <plcLib.h>       // Load the PLC library

/* Programmable Logic Controller Library for the Arduino and Compatibles

   Industrial Shields M-Duino 38R IO PLC - Use of default pin names and numbers
   Product Information: http://www.industrialshields.com
   
   Connections:
   Inputs 
     I00 - I05 (B Zone)
     I10 - I15 (C Zone)

   Outputs
     Q00 - Q02 (B Zone)
     R01-R08   (B Zone)
     Q10 - Q12 (C Zone)
     R11-R18   (C Zone)

   Software and Documentation:
   http://www.electronics-micros.com/software-hardware/plclib-arduino/
   
*/

// B Zone Inputs
const int I00 = 2;       // Interrupt 0
const int I01 = 3;       // Interrupt 1
const int I02 = A0;
const int I03 = A1;
const int I04 = A2;
const int I05 = A3;

// B Zone Outputs
const int Q00 = 4;
const int Q01 = 5;
const int Q02 = 6;

// B Zone Relay Outputs
const int R01 = 23;
const int R02 = 22;
const int R03 = 25;
const int R04 = 24;
const int R05 = 40;
const int R06 = 39;
const int R07 = 38;
const int R08 = 37;

// C Zone Inputs
const int I10 = 18;      // Interrupt 5
const int I11 = 19;      // Interrupt 4
const int I12 = A6;
const int I13 = A7;
const int I14 = A8;
const int I15 = A9;

// C Zone Outputs
const int Q10 = 8;
const int Q11 = 9;
const int Q12 = 7;

// C Zone Relay Outputs
const int R11 = 28;
const int R12 = 27;
const int R13 = 30;
const int R14 = 29;
const int R15 = 45;
const int R16 = 44;
const int R17 = 43;
const int R18 = 42;

void setup() {
  customIO();        // Setup inputs and outputs for Industrial Shields M-Duino 38R IO PLC
}                    // (See IO tab for details)

void loop() {        // Sample code follows - replace as required
  in(I00);           // Read Input I00 and send to Output Q00
  out(Q00);
}
