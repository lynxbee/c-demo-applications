#include <stdio.h>
#include <stdarg.h>

enum e {
	DEBUG,
	WARNING,
	CRITICAL,
	ALL
};

// TODO: implement for ALL

int verbose = CRITICAL;

void debug(int i, ...) {
	va_list ptr;
	va_start(ptr, i);

	switch (i) {
		case DEBUG :
			if (verbose == DEBUG) 
				printf("%s\n", va_arg(ptr, char*));
			break;
		case WARNING : 
			if (verbose == WARNING) {
				printf("%s :", va_arg(ptr, char*));
				printf("%d\n", va_arg(ptr, int));
			}
			break;
		case CRITICAL : 
			if (verbose == CRITICAL) { 
				printf("%s : ", va_arg(ptr, char*));
				printf("%d : ", va_arg(ptr, int));
				printf("%f\n", va_arg(ptr, double));
			}
			break;
		default : printf("This debugging level is not supported\n");
			
	}
}

int main(int argc, char **argv) {
	int i = 32;
	float f = 3.33;

	debug(DEBUG, "This is debug statement");
	debug(WARNING, "This is warning message: ", i);
	debug(CRITICAL, "This is critical message: ", i, f);

	return 0;
}

/* from man page of va_start


           #include <varargs.h>

           void
           foo(va_alist)
               va_dcl
           {
               va_list ap;

               va_start(ap);
               while (...) {
                   ...
                   x = va_arg(ap, type);
                   ...
               }
               va_end(ap);
           }

*/
