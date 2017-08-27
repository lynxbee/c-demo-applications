#include <stdio.h>

int main(void) {
	printf("Hello World \n");
	return 0;
}

/*

	header
	return_type main(void) {
		body;
		return success/failure;
	}


	Every C program contains minimum 3 sections as,
		- Header
		- main
		- Body

	Header - is where all the header .h files are included.
		 .h header files contains the declarations of the
		  	functions using in the program.
		 here, we use function "printf" which is declared
			 in stdio.h and defined in c library libc.

	main - is the entry point of every C program. Every C program
		 should contain one main for program execution.
		 The syntax adjucent to main is like below,
		"return data type" main (void) 
		- return data type for main is "int" and it is used to
			indicate success or failure of the program execution.
			In above program "return 0" is related to
			"return data type" which returns integer 0.
		- void inside main(void) indicates main doesn't accept
			any paramaters right now from command line, but
			there are ways to accept command line arguments
			using argc & argv to main which we will see later.

	body - body of a "C" program can be anything from a single printf
		to a complex program which is defined in side open&close 
		curly brace { ... body ... }
		NOTE: Every statement inside body ends with "semicolon" ";"

		printf("Hello World \n");
		here, this function "printf" prints the string "Hello World"
			on to the terminal.
		"\n" - indicates go to new line, so using within printf
			it prints strings and goes to new line, which makes
			displaying of output on terminal look good.
*/
