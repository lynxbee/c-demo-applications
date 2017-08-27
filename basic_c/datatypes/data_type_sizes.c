#include <stdio.h>

int main(void) {
	char c;
	signed char c1;
	unsigned char c2;

	int a;
	short int a1;
	long int a2;
	signed int a3;
	unsigned int a4;
	short signed int a5;
	short unsigned int a6;
	long signed int a7;
	long unsigned int a8;

	float b;
	double b1;
	long double b2;

	printf ("sizeof (char) = %d \n", sizeof(c));
	printf ("sizeof (signed char) = %d \n", sizeof(c1));
	printf ("sizeof (unsigned char) = %d \n", sizeof(c2));

	printf ("sizeof (int) = %d \n", sizeof(a));
	printf ("sizeof (short int) = %d \n", sizeof(a1));
	printf ("sizeof (long int) = %d \n", sizeof(a2));
	printf ("sizeof (signed int) = %d \n", sizeof(a3));
	printf ("sizeof (unsigned int) = %d \n", sizeof(a4));
	printf ("sizeof (short signed int) = %d \n", sizeof(a5));
	printf ("sizeof (short unsigned int) = %d \n", sizeof(a6));
	printf ("sizeof (long signed int) = %d \n", sizeof(a7));
	printf ("sizeof (long unsigned int) = %d \n", sizeof(a8));

	printf ("sizeof (float) = %d \n", sizeof(b));
	printf ("sizeof (double) = %d \n", sizeof(b1));
	printf ("sizeof (long double) = %d \n", sizeof(b2));

	return 0;
}

/*
sizeof (char) = 1 
sizeof (signed char) = 1 
sizeof (unsigned char) = 1 
sizeof (int) = 4 
sizeof (short int) = 2 
sizeof (long int) = 4 
sizeof (signed int) = 4 
sizeof (unsigned int) = 4 
sizeof (short signed int) = 2 
sizeof (short unsigned int) = 2 
sizeof (long signed int) = 4 
sizeof (long unsigned int) = 4 
sizeof (float) = 4 
sizeof (double) = 8 
sizeof (long double) = 12 
*/
