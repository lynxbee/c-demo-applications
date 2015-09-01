#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

/*

You can change char *dirname = "./this_is_a_test_directory";
inside main to point to the directory contents
you want to check.

Compile as:
	$ gcc -o create_directory create_directory.c
Run as:
	$ ./create_directory

After you run this, you can see a directory created like below
from where, you executed above command,

$ ls -al
drwx------ 2 user user 4096 Sep  2 00:25 this_is_a_test_directory

Use below for mode,
------------------
sys/stat.h provides several integers you can bytewise-OR (|)
	 together to create your mode_t:

    User: S_IRUSR (read), S_IWUSR (write), S_IXUSR (execute)
    Group: S_IRGRP (read), S_IWGRP (write), S_IXGRP (execute)
    Others: S_IROTH (read), S_IWOTH (write), S_IXOTH (execute)

Additionally, some shortcuts are provided
	 (basically a bitwise-OR combination of the above )

    Read + Write + Execute: S_IRWXU (User), S_IRWXG (Group), S_IRWXO (Others)
    DEFFILEMODE: Equivalent of 0666 = rw-rw-rw-
    ACCESSPERMS: Equivalent of 0777 = rwxrwxrwx


*/

void create_directory(char *dirname) {
	int r;

	r = mkdir(dirname, S_IRUSR | S_IWUSR | S_IXUSR); //read, write & execute permission for only user

	if (!r)
		printf("Directory : %s created successfully : \n", dirname);
	else
		perror(dirname);

}

int main(int argc, char **argv) {
	char *dirname = "./this_is_a_test_directory";
	create_directory(dirname);
	return 0;
}
