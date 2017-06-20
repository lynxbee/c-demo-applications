#include <stdio.h>
	
struct person {
	char name[20];
	int age;
	float salary;
};

void function(struct person);

int main(void) {

	struct person p1 = {"person_name", 20, 20000.723};

	function(p1);

	return 0;
}

void function(struct person p) {

	printf("name = %s, age = %d, salary = %f\n", p.name, p.age, p.salary);
//	printf("name = %s, age = %d, salary = %.3f\n", p.name, p.age, p.salary);
}
