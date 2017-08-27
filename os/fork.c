#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

/* This is simple process creation program using fork system call,
   fork return childs process Id in main/parent process and 
   return 0 in child process.

   once the child process is completed, it normally reports its
   status to the parent process, now if a parent process tries
   to complete even before child is finished, we need to wait
   for child process to finish, otherwise parent process will
   terminate before child finished, resulting child becoming
   parentless, for which process 0 or init becomes the parent.
   This process is called "Orphan" process.
*/

int main(int argc, char **argv) {
	pid_t child_pid;
	int child_status;

	child_pid = fork();
	switch (child_pid) {
		case -1:
			printf ("error: we can use perror\n");
			perror("fork");
			exit(1);
		case 0:
			printf("hello world\n");
			exit(0);
		default:
			wait(&child_status);
	}
	printf("continueing parent process execution\n");
	return 0;
}
