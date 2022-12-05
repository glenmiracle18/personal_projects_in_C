#include <stdio.h>

int fact(int n)
{
	/* base case */
	if (n <= 1)
	{
		return 1;
	}

	return (n * fact(n - 1));
}



int main(void)
{
	int f;
	f = fact(8);
	printf("%d\n", f);
	return 0;
}

