#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*

       char *getcwd(char *buf, size_t size);
       char *get_current_dir_name(void);

   These functions return a null-terminated string containing an
       absolute pathname that is the current working directory of the
       calling process.  The pathname is returned as the function result and
       via the argument buf, if present.
*/

/*
Compile as:
	$ gcc -o current_working_directory current_working_directory.c

Run as :
	$ ./current_working_directory

This should print the current working directory from where you run
the executable i.e. ./current_working_directory
 */

char *t_get_current_dir_name(void) {
	char *dir = get_current_dir_name();
	return dir;
}

char *t_getcwd(void) {
       /* If the length of the absolute pathname of the current working
       directory, including the terminating null byte, exceeds size bytes,
       NULL is returned, and errno is set to ERANGE; an application should
       check for this error, and allocate a larger buffer if necessary.

	 char *buf = (char *)malloc(1024 * sizeof(char));
	 char *dir = getcwd(NULL, 1024); //change 1024 to as mentioned above
	*/

       /* As an extension to the POSIX.1-2001 standard, glibc's getcwd()
       allocates the buffer dynamically using malloc(3) if buf is NULL.  In
       this case, the allocated buffer has the length size unless size is
       zero, when buf is allocated as big as necessary.  The caller should
       free(3) the returned buffer. */


	char *dir = getcwd(NULL, 0); // Lets handle everything automatically.
	if(dir == NULL)
		perror("Error: ");

	return dir; /*getcwd returns buf, so both dir & buf address will be same. */
}

int main(int argc, char **argv) {
	char *pwd;
	char *t;

	pwd = t_get_current_dir_name();
	printf("Present working directory is: %s\n", pwd);
	free(pwd);

	t = t_getcwd();
	printf("Present working directory is: %s\n", t);
	free(t);
	return 0;
}
