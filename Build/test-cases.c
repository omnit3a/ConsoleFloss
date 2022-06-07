#include <stdio.h>
#include <stdlib.h>
#include "ConsoleFrame.h"
#include "ConsoleColor.h"
#include "ConsoleProgress.h"

int main(){

	//clearLog(getOS());		//test clearing terminal (commented out to aid with
					//debugging)

	/*------------------------------*/

	printf("%c\n",getOS());		//tests to see if the operating system is being
					//detected correctly
					
	/*------------------------------*/

	printf("Enter String: ");	//tests to see if user string input is working correctly
	printf("%s",getStringInput(16));//
					
	/*------------------------------*/
	
	printf("Enter Integer: ");	//tests to see if user int input is working correctly
	printf("%i\n",getIntegerInput(16));//
					   
	/*------------------------------*/

	printWln("With Newline");	//tests to see if the specialized print statements work
	printNln("Without Newline");	//**with literals**
	char * testString = "Hello";	//
	printWln(testString);		//**with variables**
	printNln(testString);		//
	
	/*------------------------------*/

	setColor(B_RED);		//tests to see if the the ConsoleColor library is working
	printWln("Red");		//
	resetColor();			//

	/*-----------------------------*/
	
	printf("%f\n",percentOf(10,100));	//tests to see if the ConsoleProgress library is working
	printf("%f\n",percentOf(10,99));	//first, tests to see if the "percentOf" function works
	printf("%f\n",percentOf(433,865));	//
	drawProgressBar("Out of 100",percentOf(11,100));	//second, tests to see if the "drawProgressBar" function works
	drawProgressBar("Out of 99",percentOf(10,99));		//
	drawProgressBar("Out of 865",percentOf(433,865));	//
	
	return 0;

}
