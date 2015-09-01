#include <stdio.h>

/* Compile as,
	gcc -o remove_delete_file remove_delete_file.c

   Run as,
	Create a test file,
	$ echo "This is testfile" > testfile
	$ ./remove_delete_file
   Make sure, testfile gets deleted
*/

int main(int argc, char **argv) {
	int r;
	const char *filename = "./testfile";
	r = remove(filename);
	if (r == 0)
		printf("file : %s removed successfully\n", filename);
	else
		perror(filename);

	return 0;
}
