
/**  

  * @file ArduinoRoverLib.h  
  * This is the main header file for EE444 Rover Library.  This Library includes all code
  * collections from Arduino.cc and other shield suppliers that has been previously used
  * by EE444 classes.  For documentation on how to use the Arduino architecture visit
  * http://www.arduino.cc/
  *  
  * @brief This file contains the namespace definition and header file collection for the
  * Arduino source
  *  
  * @author sgrove and other listed in the source as necessary
  *
  * @version 1.01   
  *
  */ 

#ifndef ARDUINOROVERLIB_H
#define ARDUINOROVERLIB_H

//! standard include files for memory allocation and string helpers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//! these are helper functions that make C++ more useable in its truest form
#include "cplusplushelper.h"

//! main include for standard Arduino library
#include "WProgram.h"

//! additional assist code for Rover Mission
#include "Wire.h"
#include "EEPROM.h"
#include "AFMotor.h"

#endif
