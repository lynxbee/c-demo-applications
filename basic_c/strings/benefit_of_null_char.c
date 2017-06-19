#include <stdio.h>
//#include <string.h>

int main(void) {
	char message[] = "How will you calculated the charachters in this sentence ?";
	int length = 0;

	// so this is where null character helps us.
	while (message[length] != '\0') {
		length++;
	}

	printf("Number of characters in message = %d\n", length);

	// can we get this length instead of using while, yes, using strlen library function
	// but for that, we have to include string.h header
	// printf("Number of characters in message = %d\n", strlen(message));

	return 0;
}
