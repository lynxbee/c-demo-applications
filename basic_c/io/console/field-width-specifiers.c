#include <stdio.h>

int main(void) {
	float s = 2789.742;
	int age = 23;

	printf("s = %10d years\n", age); //print in 10 columns with right justified like: s =         23 years
	printf("s = %-10d years\n", age); //print in 10 columns with left justified like  s = 23         years
	
	// print default float
	printf("s = %f\n", s);
	// print only 2 digits after decimal
	printf("s = %.2f\n", s);
	
	return 0;
}
