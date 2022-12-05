#include <stdio.h>

int fib(int i)
{
	/* base cas */

	if (i == 0)
		return 0;
	if (i == 1)
		return 1;

	/*  recursion action */

	return fib(i - 1) + fib(i - 2);
}

int main(void)
{
	int n;
	
	while (n <= 10)
	{
		printf("%d\n", fib(n));
		n++;
	}
	return 1;

}

