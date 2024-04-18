/*#######################################################
# Name: From trash to tyrant: printf.c
# Description: 5 of 100 High Quality C examples Coded by Flyandance
© 2024 Flyandance - All right reserved
########################################################*/

#include <stdio.h>

int main ( void ){
	char *t="Hello printf()--";
	char *u="Hello C--";
	char *e="";
	int charCount;
	printf("Hi printf()\n");
	
	//print and save the number of characters printed, then print the character count
	charCount=printf( "%d %10d %04d", 1, 23, 45 ); 
	printf( "--> numbers of characters are %d \n", charCount);
	
	//String, space and alignment
	printf( "%30s\n", t );    //right aligned 30 char max
	printf( "%30s\n", u );
	printf( "%5s%s\n", e,t ); //left aligned 5 spaces
	printf( "%5s%s\n", e,u );
  return 0;
}

/*
int printf (const char *__format, ...)

printf() takes a constant char pointer, and ... the variable-length parameter. This is the basic function that most beginners learn how to write the first C program, but it's also an advanced function that most people have zero idea how it actually works. It can be a good thing and a bad thing. The good thing is that a well-written library doesn't require the user to understand everything. The bad thing is that its simplicity makes something whom thinks she or he knows how to programming, a completely dummy. For now, the printf() is mainly used as a debug/learning/output tool. Further examination will be provided later because this is a relatively advanced function. 

printf() outputs any type of printable data to a screen using a format string with a decoder. For now, decimal and string are the only data that would be used. %d is for decimal and %s is for string. For each of these symbol, a corresponding variable is needed as the next augment. 

For example:
printf( "Num: %d %d", 123, 456 ); // Prints out: Num: 123 456
This function uses 3 arguments: "Num: %d %d", 123, 456; and they are separated by commons. The strings in C are enclosed in double-quote; While single characters are enclosed in single-quote; 

char  c = 'A';     //this is a single character 
char *s = "Hello"; //this is a string or a char array that terminates with a null value. 

Here is the output for this program: 
Hi printf()
1         23 0045--> numbers of characters are 17
              Hello printf()--
                     Hello C--
     Hello printf()--
     Hello C--
*/