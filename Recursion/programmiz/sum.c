#include <stdio.h>

/**
 * function that prints the sum of the recursively until zero
 */

int sum(int n)
{
	if (n != 0)
	{
		return n + sum(n - 1);
	}
	return 1;
}

int main(void)
{
	int i;
	int res;
	printf("Enter a number: \n");
	scanf("%d", &i);

	res = sum(i);
	printf("The sum of %d is %d", i, res);
	printf("\n");
	return 1;
}
