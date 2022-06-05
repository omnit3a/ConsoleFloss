#include <stdio.h>
#include <stdlib.h>
#include "ConsoleFrame.h"

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

	return 0;

}
