#include <stdio.h>

int main(void) {
	struct person {
		char name[20];
		int age;
		float salary;
	};

	struct person p1 = {"person_name", 20, 20000.78};
	struct person *ptr;

	ptr = &p1;

	printf("name = %s, age = %d, salary = %f\n", ptr->name, ptr->age, ptr->salary);

	return 0;
}
