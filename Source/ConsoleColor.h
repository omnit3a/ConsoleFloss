#define BLACK "\e[0;30m"	//dark color variants
#define RED "\e[0;31m"		//
#define GREEN "\e[0;32m"	//
#define YELLOW "\e[0;33m"	//
#define BLUE "\e[0;34m"		//
#define MAGENTA "\e[0;35m"	//
#define CYAN "\e[0;36m"		//
#define WHITE "\e[0;37m"	//

#define B_BLACK "\e[1;30m"	//bright color variants
#define B_RED "\e[1;31m"	//
#define B_GREEN "\e[1;32m"	//
#define B_YELLOW "\e[1;33m"	//
#define B_BLUE "\e[1;34m"	//
#define B_MAGENTA "\e[1;35m"	//
#define B_CYAN "\e[1;36m"	//
#define B_WHITE "\e[1;37m"	//
				
#ifndef CONSOLECOLOR_H_
#define CONSOLECOLOR_H_

void resetColor();

void setColor(char * color);

#endif
