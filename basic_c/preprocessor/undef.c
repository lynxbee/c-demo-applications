#include <stdio.h>

#define TEST

int main(void) {
	printf("starting program execution inside main\n");

#ifdef TEST
	printf("TEST is defined, so do something here\n");
#endif

#undef TEST

#ifdef TEST
	printf("TEST is defined, so do something here\n");
#else
	printf("TEST is undefined, did you do that ?\n");
#endif

	return 0;
}
