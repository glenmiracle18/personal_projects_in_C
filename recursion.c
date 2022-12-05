/* this fucntion calculates the factorial of a number recursively */

#include <stdio.h>
int factorial(int n)
{
	if(n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

/* function call */

int main(void)
{
	int f;
	f = factorial(10);
	printf("10! = %d\n", f);
	return (0);
}
