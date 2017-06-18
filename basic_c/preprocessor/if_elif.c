#include <stdio.h>

#define MACRO 3

int main(void) {

#if MACRO == 5
	printf("Macro is currently set to 5\n");
#elif MACRO == 4
	printf("Macro is currently set to 4\n");
#else
	printf("Macro is something else\n");
#endif

	return 0;
}
	
