#ifndef CONSOLEFRAME_H_
#define CONSOLEFRAME_H_

char getOS();

void clearTerminal();

char * getStringInput(int bufferLength);

int getIntegerInput(int bufferLength);

void printWln(char * content);

void printNln(char * content);

#endif
