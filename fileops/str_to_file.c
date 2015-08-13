/* Compile it as,
	gcc -o str_to_file str_to_file.c
   Execute it as,
	./str_to_file
   This will create myfile.txt in pwd
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv) {
        char *str = (char *) malloc(4096);
        FILE *fp;
        int ret;
        size_t size;

        strcpy(str, "{\"myname\":");
        strcat(str, "\"");
        strcat(str, "devbee");
        strcat(str, "\"}");

	fp = fopen( "myfile.txt" , "w" );
	size = fwrite(str , 1 , strlen(str) , fp);
	if (size != strlen(str)) {
		printf("unable to write to file: size: %d, strlen : %d\n", size, strlen(str));
	} else {
		printf("myfile.txt file written successfully\n");
	}
	return 0;
}
