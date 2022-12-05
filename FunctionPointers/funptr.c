#include <stdio.h>

void add(int a, int b)
{
	printf("Addition of a and b is %d\n", a + b);
}

void subtract(int a, int b)
{
	printf("Subtraction of a from b is %d\n", a - b);
}

void multiply(int a, int b)
{
	printf("Product of a and b is %d\n", a * b);
}


int main()
{
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
	/* here I have to assign some variables to be used for funtion calling */

	unsigned int choice;
	int a = 10;
	int b = 25;
	
	printf("Enter a choice: 0 for addition, 1 for subraction and 2 for multiplication\n");
	scanf("%d", &choice);
	/* storing response in the choice variable */

	if (choice > 2)
		return 0;
	(*fun_ptr_arr[choice])(a, b);
	
	/* end of function */
	return 0;
}
	
