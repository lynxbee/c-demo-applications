#include <stdio.h>

int main(void) {
	int age = 23;
	int take_from_user;

	printf("Predefied age = %d \n", age);

	printf("User, whats your Age ?\n");
	scanf("%d", &take_from_user);

	printf("Age entered by user : %d \n", take_from_user);

	return 0;
}
