#include <stdio.h>

// To enable pragma, just uncomment below line.
// #pragma pack (1)

struct t {
	char c;
	int i;
	float f;
};

int main(void) {
	struct t t1;

	printf("Address of character: %u\n", &t1.c);
	printf("Address of int: %u\n", &t1.i);
	printf("Address of float: %u\n", &t1.f);

	return 0;
}

// hence ideal way to write a structure, is
// start with element which takes more memory
// then which takes less memory like below,

//	struct t {
//		float f;
//		int i;
//		char c;
//	};

// here we changed the sequence to fist, float, int and char
