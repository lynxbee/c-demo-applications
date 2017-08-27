#include <stdio.h>
#include <unistd.h>

void process_input(void) {
	printf("This is parent process to operate user data\n");
}

int main(int argc, char **argv) {
	int counter = 0;
	pid_t pid_c2, pid_c1;
	printf("--beginning of program\n");

	pid_c1 = fork();
	if (pid_c1 == 0) {
		// child process
		int i = 0;
		for (; i < 5; ++i) {
			printf("child process: counter=%d\n", ++counter);
		}
	} else if (pid_c1 > 0) {
		// parent process
		pid_c2 = fork(); //fork a second child process
		if(pid_c2 == 0) {
		} else if (pid_c2 > 0) {
		} else {
			// fork for second clield failed
			printf("fork() for second cliend failed!\n");
			return 1;
		}

		process_input();

		int j = 0;
		for (; j < 5; ++j) {
			printf("parent process: counter=%d\n", ++counter);
		}
	} else {
		// fork failed
		printf("fork() failed!\n");
		return 1;
	}

	printf("--end of program--\n");
	return 0;
}
