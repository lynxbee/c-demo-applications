#include <stdio.h>

#define MACRO 4

int main(void) {
	int a = 5;

// Note: here you can't compare a macro with variable
// hence #if MACRO == a
// this statement will not work.

#if MACRO == 5
	printf("Macro value matches with a\n");
#else
	printf("Macro value doesnt match with a\n");
#endif

	return 0;
}
	
