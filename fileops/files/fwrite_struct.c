#include<stdio.h>

struct rec {
	int x,y,z;
};

int main(int argc, char **argv) {
	int counter;
	FILE *ptr_myfile;
	struct rec my_record;

	ptr_myfile = fopen("test.bin","wb");
	if (!ptr_myfile) {
		printf("Unable to open file!");
		return 1;
	}

	for (counter = 1; counter <= 10; counter++) {
		my_record.x= counter;
		fwrite(&my_record, sizeof(struct rec), 1, ptr_myfile);
	}
	fclose(ptr_myfile);
	return 0;
}

// above program opens a binary file and writes a record of something
// which was kept in structure to a file.
