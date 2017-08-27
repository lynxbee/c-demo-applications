#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/* Zombie process is the process which died immediately and whose parent
   didn't cared to handled the status of child death.
   Such process's continues to run in <defunct> state till
   the parent is exited completly.

   you can run below program as, 
	gcc -o our_zombie_child create_zombie.c
	./our_zombie_child

   This program makes parent goes sleep for 180 sec, meantime child
   has already died, but parent process doesn't handles the child's
   death since it was already in sleep ( normally this child death report
   needs to handled using signal in parent process )

   so now, you can open another terminal and type
	$ ps -ax | grep defunct
	  5208 pts/1    Z+     0:00 [our_zombie_chil] <defunct>
   
   where "ps" command showed, child process which we created became
   zombie. [ as indicated by <defunct> ]
*/

int main(int argc, char **argv) {
	pid_t child_pid;
	int child_status;

	child_pid = fork();
	switch (child_pid) {
		case -1:
			printf("error: we can use perror\n");
			perror("fork");
			exit(1);
		case 0:
			printf("child is getting dead immidiately\n");
			exit(0);
		default:
			printf("parent process continuing to execute, but not cared of child is dead or alive\n");
    			sleep (180);
	}
	return 0;
}
