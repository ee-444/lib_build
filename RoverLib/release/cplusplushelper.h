
/**  

  * @file cplusplushelper.h  
  * These helper functions incorporate and virtual C++ member use.
  *  
  * @brief Helper functions for AVR Studio g++ 
  *  
  * @author sgrove 
  *
  * @version 1.01   
  *
  */ 

#ifndef ARDUINOROVERLIB_H
#define ARDUINOROVERLIB_H

#include "ArduinoRoverLib.h"
//#include <stdint.h>

#ifdef __cplusplus
extern "C"{
#endif
 
// provide a dummy callback for the linking stage
void __cxa_pure_virtual(void); 

__extension__ typedef int __guard __attribute__((mode (__DI__))); 

int __cxa_guard_acquire(__guard *); 
void __cxa_guard_release (__guard *); 
void __cxa_guard_abort (__guard *);

//void* operator new(size_t size); 
//void operator delete(void* ptr); 

#ifdef __cplusplus
}
#endif

#endif
