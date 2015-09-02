#include <stdio.h>
#include <unistd.h>

/*
Compile as:
	$ gcc -o remove_directory remove_directory.c
Run as:
	$ ./remove_directory

If directory mentioned as
const char *dirname = "This_Is_Dir";
is not present, the above program will return as
"This_Is_Dir: No such file or directory"

Now, lets ceate a empty directory, as
	$ mkdir This_Is_Dir

and execute program,
	$ ./remove_directory

This will return as,
"Directory: This_Is_Dir removed successfully"

Create test dir inside main test directory,
	$ mkdir -p This_Is_Dir/test

and execute program as
	$ ./remove_directory
it will return as,
	This_Is_Dir: Directory not empty
So, we need to make sure the directory is empty before we
tries to delete it.
*/

int t_rmdir(const char *pathname) {
	return rmdir(pathname);
}


int main(int argc, char **argv) {
	const char *dirname = "This_Is_Dir";
	int r;
	r = t_rmdir(dirname);
	if (!r)
		printf("Directory: %s removed successfully\n", dirname);
	else
		perror(dirname);

	return 0;
}
