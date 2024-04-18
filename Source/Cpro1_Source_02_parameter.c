/*#######################################################
# Name: From trash to tyrant: parameter.c
# Description: 2 of 100 High Quality C examples Coded by Flyandance
© 2024 Flyandance - All right reserved
########################################################*/

#include <stdio.h>

int main (int index, char **text){
	while(index>-1){
		printf( "input[%d] -> %s \n", index, text[index]);
		index--;
	}
  return 0;
}

/*
Here is the output when entered like this: Newapp.exe hello c 2024
input[4] -> (null)
input[3] -> 2024
input[2] -> c
input[1] -> hello
input[0] -> Newapp.exe

The main function can only accept 2 types of parameter: 1, a void; 2, 2-parameter with an int following a char pointer pointer. This is the definition of the C language, and the parameter inputs is a dynamic array. char **text can be rewritten as char *text[]; They are exactly the same because a pointer is an array.

NULL:
null is a void pointer pointed to 0; or in another words, it's just a value of zero. It's the last entered value and it implies the end of a string. Each text string encapsulated in double-quote has a null implicitly attached to the end of its string. For example, the string "hello" has 6 bytes in memory 5 for hello, and 1 for null. Null for a char string is one byte, but for a modern computer, a null can be a 4-byte variable because a void pointer is 4 bytes. 

Memory 0:
Array begins with 0, and the first input is the string for invoking the program itself. Here it's just "Newapp.exe"

Parameters:
input[1] to input[3] are the 3 strings entered: hello c 2024; These textual inputs can be decoded by the program and it would run according to the commanded entered. Here is doing nothing but printing everything out. 
*/