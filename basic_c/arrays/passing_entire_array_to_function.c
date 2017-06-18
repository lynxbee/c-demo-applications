#include <stdio.h>

void function (int *, int);

int main(void) {
	int x[2] = {4, 10};
	function(&x[0], 2);
	// above call also can be made as,
	// function(x, 2);
	return 0;
}

void function (int *y, int j) {
	int i;
	for (i = 0; i < j; i++)
		printf("%d\n", *(y+i));
}
