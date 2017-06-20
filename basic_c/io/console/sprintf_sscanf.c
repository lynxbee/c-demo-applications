#include <stdio.h>

struct t {
	int i;
	char c;
	float f;
};

int main(void) {
	char str[20];
	struct t t1;

	sprintf(str, "%d %c %f", 10, 'c', 23.45);

	printf("string: %s\n", str);

	printf("reading back from string to struct\n");
	sscanf(str, "%d %c %f", &t1.i, &t1.c, &t1.f);
	printf("%d, %c, %f \n", t1.i, t1.c, t1.f);

	return 0;
}
