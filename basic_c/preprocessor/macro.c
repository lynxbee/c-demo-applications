#include <stdio.h>

#define MACRO_NAME 23

int main(void) {
	int a = 10;
	a = a + MACRO_NAME;
	printf("Adding a macro to a : %d\n", a);
	return 0;
}
