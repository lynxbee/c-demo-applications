#include <stdio.h>
#include <stdlib.h>

// Function declaration
int *function_add(int, int);

int main(int argc, char **argv) {
	int i = 10, j = 32;
	int *add;

	add = function_add(i,j);
	printf("addition = %d\n", *add);
	free(add); //need to free since we allocated in function
	return 0;
}

int *function_add(int k, int l) {
	int *ptr = (int *) malloc(sizeof(int));
	*ptr = k + l;
	return ptr;
}
