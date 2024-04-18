/*#######################################################
# Name: From trash to tyrant: compile.c
# Description: 4 of 100 High Quality C examples Coded by Flyandance
© 2024 Flyandance - All right reserved
########################################################*/

#include <stdio.h>
#include "libadder.h"

int main (int argc, char **argv){
	int x=aNUM, y=7;
	printf( "%d + %d = %d \n", x,y, adder(x,y));
  return 0;
}

/*
This example demonstrates simple compiling using external function and external object files from the previous example. If both libadder.c and libadder.h exists in the current folder and the the compiler is setup correctly, then the program will be compiled and run correctly. The name for .c doesn't need to match that of the header file, but for convenience, same file name is used for both files. 

Part 2:
Here the libadder.c file is converted into a static library file, and the main code are compiled using pre-compiled object files. Traditionally, library files begin with libxxx filename, so the adder libray has a name libadder.a, but it's not absolutely required. 

//**This command creates an .o object file from the source code libadder.c file
gcc.exe -c libadder.c -o libadder.o

//**This command creates an archive .a library file from the object libadder.o file
ar r libadder.a libadder.o

//#########################################################
//With both libadder.a and libadder.h moved to C:\zLib

//**The include path is passed to the preprocessor
-I C:\zLib

//**The include path and the name of the library are passed to the linker (-ladder selects libadder.a)
-L C:\zLib -ladder

*/