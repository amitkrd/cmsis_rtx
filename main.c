/*----------------------------------------------------------------------------
 * CMSIS-RTOS 'main' function template
 *---------------------------------------------------------------------------*/

#define osObjectsPublic                     // define objects in main module
#include "osObjects.h"                      // RTOS object definitions
extern int Init_Thread (void);


/*
 * main: initialize and start the system
 */
int main (void) {
  osKernelInitialize ();    	// initialize CMSIS-RTOS
  
  //console.log("Hellow World");

	
	 Init_Thread();
  // initialize peripherals here

  // create 'thread' functions that start executing,
  // example: tid_name = osThreadCreate (osThread(name), NULL);

  osKernelStart ();                         // start thread execution 
}
