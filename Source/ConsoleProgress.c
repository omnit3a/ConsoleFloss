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
	char bar[10] = "----------";		//set bar to be empty
	int spot = 0;
	while (spot < 10){			//fill bar until needed
		if (spot < progress) {
			bar[spot] = '#';
	       	} else {
			bar[spot] = '-';
	       	}
		spot++;
	}
	printf("%s [%s]\n", status, bar);	//print status and bar
}
