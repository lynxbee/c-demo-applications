#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

/* Zombie process is the process which dies/finishes immediately 
   and whose parent didn't cares to handle the status of child death.
   Such process's continues to run in <defunct> state till the
   parent is exited completly.

   So this needs to be avoided, and we need to handle the status of
   child process properly in parent process. We do this by using
   SIGCLD signal. When child finishes it sends it status to parent
   where parent receives the signal and calls the signal handler
   to process the status.

   you can run below program as, 
	gcc -o avoid_zombie avoid_zombie.c
	./avoid_zombie

   This program makes parent goes sleep for 50 sec, meantime child
   has already gets finised after 5 sec, and we receive signal in
   parent which tries to handle the signal from child.

	$ time ./a.out 
	Parent process proceeding to complete normally after processing child status
	child is getting finised after 5 sec
	child exited.
	After 50 Sec, parent is now getting closed

	real	0m50.015s
	user	0m0.000s
	sys	0m0.000s

	Above time command shows, parent getting properly exited after 50 sec
	( As expected ) and before that we get "child exited" message after
	5 sec of stating the program.
*/

void catch_child(int sig_num) {
	printf("received signal...");
	int child_status;
	wait(&child_status);
	printf("child exited.\n");
}

int main(int argc, char **argv) {
	pid_t child_pid;
	int child_status, i;

	// register a signal to catch child status ( whether is
	// completed normally or died

	signal(SIGCHLD, catch_child);

	child_pid = fork();
	switch (child_pid) {
		case -1:
			printf("error: we can use perror\n");
			perror("fork");
			exit(1);
		case 0:
			printf("child is getting finised after 5 sec\n");
			sleep(5);
			exit(0);
		default:
			break;
	}
	printf("Parent process proceeding to complete normally after processing child status\n");
	for (i=0; i<50; i++) {
		sleep(1);
	}
	printf("After 50 Sec, parent is now getting closed\n");
	return 0;
}
