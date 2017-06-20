#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

// This program reads a text file into character buffer
// and then prints as string.

#define FILENAME "sample_text_file.txt"

int file_length(char *f)
{
    struct stat st;
    stat(f, &st);
    return st.st_size;
}

int main(void) {
	FILE *fp;
	char *buf;
	int filelength, r;

	fp = fopen(FILENAME, "rb");
	if (fp == NULL) {
		printf("file %s is not present, please check\n", FILENAME);
		return -1;
	}

	filelength = file_length(FILENAME);
	printf("filelength = %d\n", filelength);
	buf = (char *) malloc(filelength * sizeof(char) + 1);
	if (buf == NULL) {
		printf("Can't allocate memory\n");
		return -1;
	}
	memset(buf, 0, filelength);

	r = fread(buf, 1, filelength, fp);
	printf("read %d characters into buffer\n", r);
	buf[filelength+1] = '\0';

	printf("%s", buf);
	return 0;
}
