#include <stdio.h>
#include <stdlib.h>
#include "ConsoleColor.h"

/**
 *	Resets the color of the terminal text to the default color.
 */
void resetColor(){
	printf("\e[0m");
}

/**
 *	Sets the color of the terminal text to the specifed color.
 */
void setColor(char * color){
	printf("%s",color);
}
