#include <stdio.h>

union u {
	int i;
	char c [4]; //just to demo, since 4 char memory becomes 1 int memory
};

void printbits(int z) {
        int size = 8 *sizeof(int);
        int j;

        for (j = (size - 1); j >=0; j--) {
                (0x1 << j) & z ? printf("1") : printf("0");
        }
        printf("\n");
}


int main(int argc, char **argv) {
	union u u1;

	//u1.i = 563;
	u1.i = 65563;
	printf("bits of %d => ", u1.i);
	printbits(u1.i);

	printf("c[0] = %d\n", u1.c[0]);
	printf("c[1] = %d\n", u1.c[1]);
	printf("c[2] = %d\n", u1.c[2]);
	printf("c[3] = %d\n", u1.c[3]);

	// this shows that we initilised only interger
	// but with union other variable char also gets
	// initialised since in union, all arguments
	// shares same memory space.
	
	return 0;
}
