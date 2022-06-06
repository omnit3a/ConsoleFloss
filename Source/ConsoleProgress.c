#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ConsoleProgress.h"

/**
 *	Returns the percentage of *value* as compared to *total*
 */
float percentOf(int value, int total){
	return (float) value / total * 100;
}

/**
 *	Rounds *value* to the nearest multiple of ten, then displays
 *	a progress bar of that value out of 100.
 *	Also prints the name of the progress bar, if specifed.
 */
void drawProgressBar(char * status, float value){
	int progress = lround(value)/10;
	printf("%s [",status);
	int spot = 0;
	for (spot = 0 ; spot < progress ; spot++){
		printf("#");
	}
	for (spot = spot ; spot < 10 ; spot++){
		printf("-");
	}
	printf("]\n");
}
