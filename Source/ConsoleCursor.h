#define UP "\e[1A"
#define DOWN "\e[1B"
#define RIGHT "\e[1C"
#define LEFT "\e[1D"
#define NEXT "\e[1E"
#define PREVIOUS "\e[1F"

#ifndef CONSOLECURSOR_H_
#define CONSOLECURSOR_H_

void moveCursor(char * direction);

#endif
