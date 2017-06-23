#include <stdio.h>

// Function declaration
int function_add(int, int);

int main(int argc, char **argv) {
	int i = 10, j = 32, add;

	add = function_add(i,j);
	printf("addition = %d\n", add);

	return 0;
}

int function_add(int k, int l) {
	return (k+l);
}
