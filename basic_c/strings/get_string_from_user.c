#include <stdio.h>

// if you want to run the program to test user input
// using scanf, just enable below line.
// #define TAKE_STRING_USING_SCANF

int main(void) {
	char name[20];
#ifdef TAKE_STRING_USING_SCANF
	printf("Enter Your Name: \n");
	scanf("%s", name);
	printf("You entered your name as: %s\n\n", name);

	printf("Did you want to enter your surname along with name? Try Again...");
	scanf("%s", name);
	printf("You entered your name & surname is: %s\n\n", name);

	printf("Did you observed that, we coundn't print your surname which\n");
	printf("was seperated by space i.e. ' ' \n");
	printf("So, thats the limitation of accepting string using scanf \n");
	printf("You can't accept the \"Multi Word\" string.\n\n");

	printf("Ok, got it.. So, whats the solution ?\n");
	printf("Thats where, fgets & puts will help us..\n");

#else
	printf("Now, Try to enter your name & surname\n");

	if(fgets (name, 20, stdin) != NULL) {
	/* writing content to stdout */
		puts("You entered your name and surname as\n");
		puts(name);
	}
#endif
	
	return 0;
}
