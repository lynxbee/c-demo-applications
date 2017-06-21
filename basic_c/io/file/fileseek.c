#include <stdio.h>
#include <string.h>

#define FILENAME "sample_text_file.txt"
 
int main (void) {
	FILE *fp;
	int pos;
	char buf[20];

	fp = fopen(FILENAME, "rw+");
	if (fp == NULL) {
		printf("unable to open file: %s\n", FILENAME);
		return -1;
	}

	pos = ftell(fp);
	printf("When file opened, pointer is at : %d\n", pos);

	printf("Now lets go 7 positions ahead, and print 15 characters\n");
	fseek(fp, 7, SEEK_CUR); //SEEK_CUR is current pointer position

	pos = ftell(fp);
	printf("We are reached now at pointer position : %d\n", pos);

	fread(buf, 15, 1, fp);
	buf[15] = '\0'; //terminate to make string 

	printf("Buffer of length: %d contained : %s\n", strlen(buf), buf);

	printf("Now we were at : %d, lets go to end of file\n", ftell(fp));
	printf("By going to end of file, will also tell us length of file\n");

	fseek(fp, 0, SEEK_END);
	pos = ftell(fp);
	printf("We reached to end: position = filelength : %d\n", pos);

	printf("Now lets rewind ourself to start of file\n");
	rewind(fp);

	pos = ftell(fp);
	printf("We are now at position : %d\n", pos);

	return 0;
}
