#include <stdio.h>
#include "header.h"

/* This program demos how to create a static library
and link it with the main program to create a executable.

Compile as:
	$ make
Run as:
	$ ./main

Refer Makefile for more details for process.

Use below command to know the symbols added into static library
	$ nm -s testlib.a

Refer http://tldp.org/HOWTO/Program-Library-HOWTO/index.html
for more information. 
*/


int main(int argc, char *argv[]) {
	function1(); //call function1 from first.c
	function2(); //call function2 from second.c
	return 0;
}
