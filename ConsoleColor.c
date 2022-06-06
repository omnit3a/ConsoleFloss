#include <stdio.h>
#include <stdlib.h>
#include "ConsoleColor.h"

/**
 *	Resets the color of the terminal text to the default color.
 */
void resetColor(){
	printf("\e[0m");
}
