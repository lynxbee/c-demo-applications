#include <stdio.h>

// below program will not print anything if ENABLE is not defined.
// way to enable this code is, just define like below,

#define ENABLE

// to disable this, just comment above line

int main(void) {

#ifdef ENABLE
	printf("This code is enabled upon condition as above\n");
#endif
	return 0;
}
