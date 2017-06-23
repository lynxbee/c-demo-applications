#include <stdio.h>

int main(int argc, char **argv) {
	int j;
	float k = 32.89;

	j = (int)k; //typecase from float to interger
	printf("j = %d\n", j); // typecasting in necessary to force conversion

	return 0;
}
