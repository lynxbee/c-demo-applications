#include <stdio.h>

void printbits(int z) {
	int size = 8 *sizeof(int);
	int j;

	for (j = (size - 1); j >=0; j--) {
		(0x1 << j) & z ? printf("1") : printf("0");
	}
	printf("\n");
}

int main(int argc, char **argv) {
	int x = 4;
	int y = 8;

	printf("%d results to bits as: => ", x);
	printbits(x);

	printf("%d results to bits as: => ", y);
	printbits(y);

	printf("One's complement of %d is : %d => ",x, ~x);
	printbits(~x);

	printf("bitwise AND : %d & % d is %d => ", x, y, x&y);
	printbits(x&y);

	printf("bitwise OR : %d | % d is %d => ", x, y, x|y);
	printbits(x|y);

	printf("bitwise XOR : %d ^ % d is %d => ", x, y, x^y);
	printbits(x^y);

	printf("Right shift %d by %d results : %d => ", x, 4, x>>4);
	printbits(x>>4);

	printf("Left shift %d by %d results : %d => ", x, 4, x<<4);
	printbits(x<<4);

	return 0;
}
