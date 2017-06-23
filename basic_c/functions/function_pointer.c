#include <stdio.h>

// Function declaration
int function_add(int, int);

int main(int argc, char **argv) {
	int i = 10, j = 32, add;
	int (*fptr)(); //declare function pointer

	fptr = function_add; //initilise function pointer

	add = (*fptr)(i,j);
	printf("addition by function pointer = %d\n", add);

	return 0;
}

int function_add(int k, int l) {
	return (k+l);
}
