#include <stdio.h>
#include <string.h>

// TODO : this program doesnt work, fixit

int main(void) {
	struct person {
		char name[20];
		int age;
		float salary;
	};

	struct person p[5];
	int i = 0, j = 0;
	char ch, temp[20];

	for (i=0; i<5; i++) {
		printf("\nEnter %d persons name, age & salary: ", i);

		j = 0; //reset for taking new name
		while ((ch = getchar()) != ' ') {
			temp[j] = ch;
			j++;
		}
			temp[j] = '\0';


#if 0
	        fgets (temp, 20, stdin);
		/* Workaround to avoid \n and %s complexity */
#endif
		strcpy(p[i].name, temp);

		// scanf has a serious problem with \n ,hence it wont work.
		scanf("%d, %f", &p[i].age, &p[i].salary);
	}
	
	printf("===== You Entered =====\n");
	for (i=0; i<5; i++) {
		printf("Name: %s, Age: %d, Salary: %f", p[i].name, p[i].age, p[i].salary);
	}
	return 0;
}
