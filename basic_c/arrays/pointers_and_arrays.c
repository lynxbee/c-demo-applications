#include <stdio.h>

int main(void) {
	int x[2] = {4, 10};
	int *y;
	y = &x[0];

	printf("x[0]=%d, *y=%d\n", x[0], *y);

	// now lets increment the pointer
	printf("Incrementing pointer as y++\n");
	y = y + 1; // here you can increment as many till y+(n-1) if "n" is element size
	printf("*y=%d\n", *y);
	// this printed 10, which means incrementing pointer reaches to next element.

	printf("Decrementing pointer as y--\n");
	y--;
	printf("*y=%d\n", *y);

	return 0;
}
	
