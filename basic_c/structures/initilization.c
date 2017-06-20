#include <stdio.h>
#include <string.h>

int main(void) {
#if 0
	struct person {
		char name[20];
		int age;
		float salary;
	};

	struct person p1 = {"person_name", 20, 20000.78};

	printf("name = %s, age = %d, salary = %f\n", p1.name, p1.age, p1.salary);
#endif
//	Above things can also be initilised as,
	struct person {
		char name[20];
		int age;
		float salary;
	} p1;

	strcpy(p1.name, "person_name");
	p1.age = 20;
	p1.salary = 20000.78;
	
	printf("name = %s, age = %d, salary = %f\n", p1.name, p1.age, p1.salary);

	return 0;
}
