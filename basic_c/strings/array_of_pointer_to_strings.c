#include <stdio.h>
#include <string.h> // for strlen
#include <stdlib.h> // for malloc

//#define UNINITILISED_ARRAY_OF_STRINGS

#ifdef UNINITILISED_ARRAY_OF_STRINGS
int main(void) {
	char *names[5];
	int i;

	for (i=0; i<5; i++) {
		printf("Enter Name: ");
		scanf("%s", names[i]);
	}

	return 0;
}
#else

// Above program tried to create an array for 5 names
// and take the those 5 names from user and save it
// in array.

// but did we known, where we are storing those names
// in memory ?
// certainly not, because the addresses of inidividual names
// would contain garbage values since we are not initialising
// the pointers with the proper address.

// so solution to this is to allocate the memory in runtime
// and save it to the pointer array and then save the
// string taken from user into that memory location.

int main(void) {
	char *names[5];
	int i, len;
	char single_name[20];
	char *p;

	for (i=0; i<5; i++) {
		printf("Enter Name: ");
		scanf("%s", single_name);
		len = strlen(single_name);
		p = (char *)malloc(sizeof(char *) * len);
		strcpy(p, single_name);
		names [i] = p;
	}

	printf("\n Entered Names are as below: \n");
	for (i=0; i<5; i++) {
		printf("%s\n", names[i]);
	}

	printf("we are done with array of strings, now free the memory\n");
	for (i=0; i<5; i++) {
		free(names[i]);
	}

	return 0;
}
#endif
