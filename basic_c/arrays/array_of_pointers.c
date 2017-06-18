#include <stdio.h>

int main(void) {
	int x[2] = {4, 10};
	int *p[] = {x, x+1};

	printf("%d, %d\n", **p, **(p+1));
	return 0;
}
