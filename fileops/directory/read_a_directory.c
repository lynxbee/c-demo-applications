#include <stdio.h>
#include <string.h>
#include <dirent.h>

/*

You can change char *dirname = "/home";
inside main to point to the directory contents
you want to check.

Compile as:
	$ gcc -o read_a_directory read_a_directory.c
Run as:
	$ ./read_a_directory
*/

void print_directory_contents(char *dirname) {
	DIR *dir;
	struct dirent *entry;

	dir = opendir(dirname);

	if (dir) {
		printf("Directory has following files : \n");

		while ((entry = readdir(dir))) {
			if (strlen(entry->d_name) < 3)
				continue;

			printf("%s \n", entry->d_name);
		}
		closedir(dir);
	}
}

int main(int argc, char **argv) {
	char *dirname = "/home";
	print_directory_contents(dirname);
	return 0;
}
