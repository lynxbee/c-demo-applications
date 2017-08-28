#include <stdio.h>
#include "header.h"

/* This program demos how to create a shared library
and link it with the main program to create a executable.

Compile as:
	$ make

After this we have to set the library path for the loader as,

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./

Run as:
	$ ./main

Refer Makefile for more details for process.

Use below command to know the symbols added into static library
	$ nm -s testlib.so

Refer http://tldp.org/HOWTO/Program-Library-HOWTO/index.html
for more information. 
*/


int main(int argc, char *argv[]) {
	function1(); //call function1 from first.c
	function2(); //call function2 from second.c
	return 0;
}
