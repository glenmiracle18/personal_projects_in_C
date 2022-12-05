#include <stdio.h>

int fact(int n)
{
	int res;
	int i;
	res = 1;
	i = 1;

	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return res;
}

/* fuction call */

int main(void)
{
	int m;
	m = fact(5);
	printf("5! = %d\n", m);
	printf("\n");
	return 0;
}

