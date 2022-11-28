/* Include-file defining functions of the OS-core 	 		*/
#ifndef __CORE__
#define __CORE__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void initOS(void);
/* all initialisation steps are started in this function			*/
/* +++ this must be extended for multiprogramming					*/

void coreLoop(void);
/* the core scheduling loop of the OS								*/
/* +++ this must be extended for multiprogramming					*/


#endif /* __CORE__ */