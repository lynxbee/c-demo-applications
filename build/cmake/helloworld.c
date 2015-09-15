#include <stdio.h>
#include "helloConfig.h"

int main(int argc, char **argv) {
	printf("Hello World from cmake\n");

	printf("Version %d.%d\n", hello_VERSION_MAJOR, hello_VERSION_MINOR);

	return 0;
}
