
// #define CALL_BY_VALUE
#define CALL_BY_REFERENCE

#ifdef VALUE
/* Call by Value */
#include <stdio.h>

void function (int y);

int main(void) {
	int i, x[2] = {4, 10};

	for (i=0; i<2; i++)
		function(x[i]);

	return 0;
}

void function (int y) {
	printf("%d\n", y);
}
#endif

/* Call by Reference */
#ifdef CALL_BY_REFERENCE
#include <stdio.h>

void function (int *y);

int main(void) {
	int i, x[2] = {4, 10};

	for (i=0; i<2; i++)
		function(&x[i]);

	return 0;
}

void function (int *y) {
	printf("%d\n", *y);
}
#endif
