#include <stdio.h>

// a college has 6 trades, 4 years batch

enum trade {
	COMPUTER,
	ELECTRINICS,
	COMMUNICATION,
	IT,
	MECHANICAL,
	CIVIL
};

struct student {
	unsigned trade : 3;
	unsigned year : 3;
	unsigned genter : 1;
};

struct t_student {
	unsigned int trade;
	unsigned int year;
	unsigned genter;
};

int main(int argc, char **argv) {
	struct student s;
	struct t_student s1;

	s.trade = IT;
	s1.trade = IT;

	printf("sizeof struct with bitfields : %d\n", sizeof(struct student));
	printf("sizeof struct with integers : %d\n", sizeof(struct t_student));
	// above two lines will print the real benefits of bitfields
	// while structure with 3 ints, took 12 bytes of memory
	// structure with bitfields took just 4 bytes.

	printf ("Trade is set to : %d\n", s.trade);

	return 0;
}
