#include <stdio.h>
#include <string.h>

int main(void) {
	char source[] = "hello";
	char destination[50];
	int length;

	length = strlen(source);
	printf("length of source string = %d\n", length);

	strcpy(destination, source);
	printf("destination string after copying source is now: %s\n", destination);

	strcat(destination, " world!");
	printf("destination string after appending another string is now: %s\n", destination);

	if (!strcmp(source, "test string")) {
		printf("source and \"hello\" string is same\n");
	} else {
		printf("source is certainly not same as \"test string\"\n");
	}

	return 0;
}

