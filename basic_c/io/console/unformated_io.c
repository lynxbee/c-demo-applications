#include <stdio.h>
#include <string.h>

int main(void) {
	int i = 0, j = 0;
	char name[20];
	char ch, temp[20];

	printf("\nEnter persons name: \n");

	while ((ch = getchar()) != '\n') {
		temp[j] = ch;
		j++;
	}
	temp[j] = '\0';

	strcpy(name, temp);
	
	printf("===== You Entered =====\n");
	printf("Name: %s ", name);
	return 0;
}
