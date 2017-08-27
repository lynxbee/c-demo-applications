#include <stdio.h>
 
int main (int argc, char **argv) {
	int a = 10;
	char another;

	/* Ideally this program works, but in Linux
	\n creates problem to accept the another 
	character using scanf. */
	do {
		printf("value of a: %d\n", a);
		a = a + 1;
		printf("do you want to continue Y/N ?");
		scanf("%c", &another);
	} while( another == 'Y');
 
	return 0;
}
