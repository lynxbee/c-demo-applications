// if you want to run array program, simply enable below line
//#define ARRAY

#ifndef ARRAY
#include <stdio.h>

int main(void) {
	int x;
	x = 4;
	x = 10;
	printf("x = %d\n", x);
	return 0;
}
#endif

// Above programs prints value of x = 10
// which shows we can't use single integer variable to store
// multiple values
// hence we will need another data type which will
// store multiple values, and the same is called as arrays.

// arrays is a set of similar data types.
// like, int arrary, float array, char array
// so you can't have a single array which will contain
// both integer and float etc.

// Now we will rewrite the above same program using arrays as,

#ifdef ARRAY
#include <stdio.h>

int main(void) {
	int x[2];
	x[0] = 4;
	x[1] = 10;
	printf("x[0] = %d\n", x[0]);
	printf("x[1] = %d\n", x[1]);
	return 0;
}

// above program shows how to create an integer array
// and initilise it with two integers and print the same.
#endif
