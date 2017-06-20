#include <stdio.h>

#define FILENAME "sample_text_file.txt"

#define WITH_NULLCHECK

#ifndef WITH_NULLCHECK
int main(void) {
	FILE *fp;
	char ch;

	fp = fopen(FILENAME, "r");

	while((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}

	return 0;
}
#else
// now, what if sample_text_file.txt is not present
// in the directory, above program will fail in runtime
// with segmentation fault like below,

// open("sample_text_file.txt", O_RDONLY)  = -1 ENOENT (No such file or directory)
// --- SIGSEGV {si_signo=SIGSEGV, si_code=SEGV_MAPERR, si_addr=0} ---
// +++ killed by SIGSEGV (core dumped) +++
// Segmentation fault (core dumped)

int main(void) {
	FILE *fp;
	char ch;

	fp = fopen(FILENAME, "r");
	if (fp == NULL) {
		printf("file %s is not present, please check\n", FILENAME);
		return -1;
	}

	while((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}

	return 0;
}

// in above program, we check FILE pointer with the NULL,
// so if the file is not present, fopen will return NULL
// making our if statement true, and then we will just return
// with error message

#endif
