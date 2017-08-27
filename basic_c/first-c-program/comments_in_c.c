#include <stdio.h>
// This is a single line comment.
// This program prints "Hello World" on Terminal

/*
	Any lines between "slash" "star" and "star" "slash" are considered
	as comments. As we are tying here, this will be an example of multiline
	comment.

	In C, you can't have nested comments. Meaning you can't write as,
	"star" "slash" ... some comment 1 ... 
		"star" "slash" ... some comment 2 ... 
		"slash" "star"
	"slash" "star"
	This will not be a Valid nested comment.

	In C program, comments doesn't have any use other than for better
	understanding of the developers of the source code in case
	you are writing big program and wants to remember what is the
	functionalities of the code blocks (functions/lines) in program.

	In C, you can write a Valid comment at any place in code,
	below we have given some examples of Valid comment.

*/
int main(void) {
	printf ("Hello World\n"); // This is Valid comment
	printf ("Hello World\n"); /* This is a Valid comment */
	printf /* This is a valid comment */ ("Hello World\n");
	/*
	  This is multiple line
	  Valid comment */
	return 0;
}
