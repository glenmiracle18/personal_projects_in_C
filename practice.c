#include <stdio.h>

int main(void)
{
	int var;
	int *ptr;
	int **pptr;

	var = 800;

	/* take the address of var */
	ptr = &var;

	/* take the address of ptr using the address of operator & */
	pptr = &ptr;

	/*take the value using ptr */
	printf("Value of var = %d\n", var);
	printf("Value available at ptr = %d\n", *ptr);
	printf("Value available at pptr = %d\n", **pptr);

	return 0;
}

