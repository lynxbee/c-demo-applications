#include <stdio.h>

int main(void) {
	char message[] = {'H', 'E', 'L', 'L', 'O', '\0'};
	printf("string is : %s\n", message);

	// Another way of initialising same string is as below,
	// char message[] = "HELLO";
	// note here, we dont need to mention "null" character '\0'
	// and this is most standard way to initilise strings

	return 0;
}
