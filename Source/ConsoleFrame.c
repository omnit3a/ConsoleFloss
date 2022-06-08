#include <stdio.h>
#include <stdlib.h>
#include "ConsoleFrame.h"

/**
 *	Returns a letter corresponding to the name of the operating system being used.
 *	'W' = Windows 32/64
 *	'M' = MacOSX
 *	'L' = Linux
 *	'B' = BSD
 */
char getOS(){
	#ifdef _WIN32
		return 'W';
	#endif
	#ifdef __APPLE__
		return 'M';
	#endif
	#ifdef __linux__
		return 'L';
	#endif
	#ifdef BSD
		return 'B';
	#endif
}

/**
 *	Clears the terminal in different ways depending on the host operating system.
 */
void clearTerminal(){
	char os = getOS();
	if (os=='W') { system("cls"); }
	if (os=='M'||os=='L'||os=='B') { system("clear"); }
}

/**
 *	Returns a string from the console with a max length of *bufferLength*.
 *	If the input text is longer than *bufferLength* then the text will be
 *	cropped to fit that length.
 */
char * getStringInput(int bufferLength){
	char str[bufferLength];
	return fgets(str, bufferLength, stdin);
}

/**
 * 	Returns a 32 bit signed integer from the console with a max length of 
 * 	*bufferLength*. If the input number is more digits than the value of
 * 	*bufferLength* then the final number will be cropped to fit that length.
 */
int getIntegerInput(int bufferLength){
	char *strOff;
	char str[bufferLength];
	return strtol(fgets(str,bufferLength,stdin),&strOff,10);
}

/**
 *	Prints the string passed as a parameter, concatenated with a new line
 *	character.
 */
void printWln(char * content){
	printf("%s\n",content);
}

/**
 *	Prints the string passed as a parameter.
 */
void printNln(char * content){
	printf(content);
}

