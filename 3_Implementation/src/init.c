#include "function.h"

/* Check the pin matches with default value */
int init(int pin) {
	if(pin == 3412 || pin == 1243)
	    return 1;
	else
	    return 0;	
}
