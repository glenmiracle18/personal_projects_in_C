#include <stdio.h>

/* This exercise is to replicate what I did the other thay on funptr */

void add(int a, int b)
{
	printf("Addition of a and b is : %d\n ", a + b);
}

void sub(int a, int b)
{
	printf("Subtraction of a and b is : %d\n ", a - b);
}

void mul(int a, int b)
{
	printf("Multiplication of a and b is : %d\n ", a * b);
}

void mod(int a, int b)
{
	printf("The modulo of a with respect to b is : %d\n ", a % b);
}


int main()
{
	void (*funptr_array[])(int, int) = {add, sub, mul, mod};

	unsigned int choice;
	int a;
	int b;
	/* here we will collect the required integers for the math */
	printf("Enter the value of integer a:\n");
	scanf("%d", &a);

	printf("Enter the value of integer b:\n");
	scanf("%d", &b);

	printf("Enter 0 for addintion, 1 for subtraction, 2 for multiplication and 3 for modulo:\n ");
	scanf("%d", &choice);

	if (choice > 3)
		return 0;
	(*funptr_array[choice])(a, b);
}
