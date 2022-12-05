#include <stdio.h>

typedef struct Person {
	double salary;
	int age;
} person;

int main(void) {

	person person1;
	person person2;
	person1.age = 23;
	person2.age = 76;

	person1.salary = 3457;
	person2.salary = 54799;

	printf("Age of person1 is %d\n", person1.age);
	printf("Salary of peson1 is %2lf\n", person1.salary);
	
	
	printf("Age of person2 is %d\n", person2.age);
	printf("Salary of person2 is %2lf\n", person2.salary);
	return 0;
}
