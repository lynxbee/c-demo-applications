#include <stdio.h>

int main(void) {
	char *message = "hello";
	char *p;

	p = message;
	printf("string in p : %s\n", p);

	// Now we will try to update the string in p
	p = "world";
	printf("updated string in p : %s\n", p);

	// same you can't do with static string which can be defined as

	// char message[] = "hello";
	// char p[10];
	// p = message;
	// this will give error;
	// or p = "world" is not possible.

	// hence we need to use pointers;
	
	return 0;
}
