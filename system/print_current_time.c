#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

/*
Compile as:
	$ gcc -o print_current_time print_current_time.c
Run as :
	$ ./print_current_time
*/

void print_time(void) {
	struct timeval tv;
	struct tm* ptm;
	char time_string[40];
	long milliseconds;

	/* Obtain the time of day, and convert it to a tm struct. */
	gettimeofday (&tv, NULL);
	ptm = localtime (&tv.tv_sec);

	/* Format the date and time, down to a single second. */
	strftime (time_string, sizeof (time_string), "%Y-%m-%d %H:%M:%S", ptm);

	/* Compute milliseconds from microseconds. */
	milliseconds = tv.tv_usec / 1000;

	/* Print the formatted time, in seconds, followed by a decimal point
		and the milliseconds. */
	printf ("%s.%03ld\n", time_string, milliseconds);
}

int main(int argc, char **argv) {
	print_time();
	return 0;
}
