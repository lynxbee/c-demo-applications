#include <stdio.h>

int main(int argc, char *argv[]) {
	// suppose we decided we want to take only
	// two arguments as input to the executable
	// then argc i.e. argument count will be 3
	// 2 for actual arguments and one for exe name

	if (argc != 3) {
		printf("incorrect number of command line arguments\n");
		return -1;
	}

	// now we will just print what will get copied
	// into argv which is array of character strings

	printf("argv[0] = %s\n", argv[0]); 
	printf("argv[1] = %s\n", argv[1]); 
	printf("argv[2] = %s\n", argv[2]); 

	// so if we compile this program and run, then it will print as.

	// $ ./a.out file1 file2
	//   argv[0] = ./a.out
	//   argv[1] = file1
	//   argv[2] = file2

	// Now its upto you to decide how we want to use this arguments.
	return 0;
}
