#include <stdio.h>

int main(void) {
	int x [5], i;
	printf("Enter elements of array: \n");
	for (i = 0; i < 10; i++)
		scanf("%d", &x[i]);

	printf("Printing output of above array :");
	for (i = 0; i < 10; i++)
		printf("x[%d] = %d \n", i, x[i]);

	return 0;
}

// compile as, gcc array_size_limit.c
// run as, ./a.out

/* If you run above program, it will print like below,
   which shows, it can't generate any compilation error,
   but failed to execute in run time, since we crossed
   the boundary of array during accepting array elements.
   So, its upto programmer to set and use proper limit for the array.

$ ./a.out 
Enter elements of array: 
1
3
14
34
23
56
99
2
7
89
Printing output of above array :x[0] = 1 
x[1] = 3 
x[2] = 14 
x[3] = 34 
x[4] = 23 
x[5] = 56 
x[6] = 99 
x[7] = 2 
x[8] = 7 
x[9] = 89 
*** stack smashing detected ***: ./a.out terminated
Aborted (core dumped)

*/
