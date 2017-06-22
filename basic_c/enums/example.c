#include <stdio.h>

enum engineering {
	entc,
	computer,
	it,
	mechanical
};

int main (int argc, char **argv) {
	enum engineering trade;
	int mytrade;

	printf("Enum initilised values to : entc = %d, computer = %d, it = %d, \
 mechanical = %d \n", entc, computer, it, mechanical);

	// here just for simulation, we will take input in inetegr from user
	printf("Enter your trade in number as seen: ");
	scanf("%d", &mytrade);

	trade = mytrade;

	if (trade == entc)
		printf("You are Electronics & Telecomm Engineer\n");
	else if (trade == computer)
		printf("You are Computer Engineer\n");
	else if (trade == it)
		printf("You are Information and Technology Engineer\n");
	else if (trade == mechanical)
		printf("You are Mechanical Engineer\n");
	// Note: this can also be done using switch

	return 0;
}

/* 
Above enum declaration can also be done as below,

enum enginnering {
	entc = 3,
	computer,
	it,
	mechanical
};

In above case, entc will be initilised to 3, and then all
next elements will be one more than previous, i.e.
computer will be initilised to 4
it will be initilised to 5
mechanical will be initilised to 6

enum enginnering {
	entc = 10,
	computer = 20,
	it = 30,
	mechanical = 40
};

In above case, every element can be initilized to different integer.

*/
