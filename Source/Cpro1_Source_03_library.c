/*#######################################################
# Name: From trash to tyrant: library.c
# Description: 3 of 100 High Quality C examples Coded by Flyandance
© 2024 Flyandance - All right reserved
########################################################*/

#include <stdio.h>

//This can be in a declaration file libadder.h
int adder (int, int);
#define aNUM 1

int main (int argc, char **argv){
	int x=aNUM, y=2;
	printf( "%d + %d = %d \n", x,y, adder(x,y));
  return 0;
}

//This can be in an implementation file libadder.c
int adder (int a, int b){
	return a+b;
}

/*
Before something can be used in c, it needs to be declared first. This is the most important rule and it can be tracked back to how the compiler puts together a working program. 

Header:
This is the .h file that gets included into the main source code. It should consist only declarations or prototypes. During compilation, the preprocessor copies everything in the header file into the .c file, and the .c file is compiled, but not the header. Header files are not compiled, not directly. Since it should contain symbolic definitions, nothing from it needs to be compiled anyway.  

Implementation:
This is the .c file that actually gets compiled and turns into an object file before linking with the main source code to form the final working program. The .c source code is only a fragment of the final working program, but it can still be compiled into an object file, and multiple object files can be combined to form a .a or .lib static library. Most library comes with 2 files: a .h include file for pre-declaration and a .a file for actual linkage during the compilation process. 

To sum up, the .a file contains the actual machine instruction code, while the header file contains just the data/function declaration.

*/