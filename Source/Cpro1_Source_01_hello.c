/*#######################################################
# Name: From trash to tyrant: Hello.c
# Description: 1 of 100 High Quality C examples Coded by Flyandance
© 2024 Flyandance - All right reserved
########################################################*/

#include <stdlib.h>
#include <stdio.h>

int main (void){
	system("echo Hello"); //for windows only
	printf ("World");
	printf ("\n");        //print a new line
	system("pause");      //for windows only
	return 0;
}

/*
C is the the kind of programming language that seems simple, but under its simple textual code, it's hidden with a lot of computer science and stuff, meaning to have true understanding of this simple example, you need to be a highly competent computer scientist. This implies the level of playing field is very high for an average person.

This is a simple example that prints out a text message on a command prompt: Hello World. The system() function is provided by stdlib. It essentially enters a textual command on a command prompt prompt, so echo Hello will print out a "Hello" string. "World" is printed out using prinf() function from stdio. system("pause") will pause the command prompt, so the user can have a chance to see the message before the program exits instantly. Both echo and pause are a command for a windows machine. Finally the program return a 0 value, and this implies that the program has been executed successfully. A none 0 return value means some error has been occurred. 

main and return:
int main(void) is the function that begins the source code execution point of this program, but it's only one of the many programs that runs simultaneously with other programs existing in a computer system, so it's not really the main program. main function is not absolutely required, nor it has to return a value, but that is how a tradition c program is written. A return statement is required for any function that explicitly declared that it returns an int. Even though, the return 0 statement absolutely does nothing here. A return statement is very critical. For any function, it is the point of exit, so return 0 implies that at that point, the program is exited with an error code of 0x00, or no error. 

void:
A program or a function can take any data structure as input parameter, but for this simple example, a void is the parameter, and it means no parameter. int main() works as well. It implies no parameter. For a program to be more useful, it's important to have an ability to pass data/input/command into it. 
*/