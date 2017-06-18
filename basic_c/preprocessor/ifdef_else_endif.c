#include <stdio.h>

// below program will print second message because ENABLE
// is not defined.

int main(void) {

#ifdef ENABLE
	printf("This code is enabled upon condition as above\n");
#else
	printf("When disabled, you want to execute this code\n");
#endif
	return 0;
}
