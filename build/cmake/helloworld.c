#include <stdio.h>
#include "helloConfig.h"
#include "MathFunctions.h"

int main(int argc, char **argv) {
	printf("Hello World from cmake\n");

	/* passing version from CMakelists to c program */
	printf("Version %d.%d\n", hello_VERSION_MAJOR, hello_VERSION_MINOR);

	/* Use of library */
	double outputValue = mysqrt(9);
	printf("square root is : %lf\n", outputValue);
	return 0;
}
