#include <stdio.h>

int main(void) {
	int x[2], i;

	/* Below is simple method of initilsation of array elements */
	x[0] = 4;
	x[1] = 10;
	printf ("x[0] = %d, x[1] = %d \n", x[0], x[1]);

	/* Above also can be done as, during declaration */
	// int x[2] = {4, 10};
	// or
	// int x[] = {4, 10};
	// as shown in above line, when you initilise array during 
	// declaration, giving array size is optional.

	// You can also use scanf, to get input values from users, using for loop,
	printf("Enter values to take from scanf : \n");
	for (i=0; i < 2; i++) {
		scanf("%d", &x[i]);
	}
	printf ("x[0] = %d, x[1] = %d \n", x[0], x[1]);

	return 0;
}
