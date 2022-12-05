#include <stdio.h>

// function that prints the sum of all single digits in a number
int sumdigits(int num)
{
	// Base case
	if (num == 0)
	{
		return 0;
	}
	return (num % 10 ) + sumdigits(num / 10);
}
/* function call */

int main(void)
{
	printf("%d\n", sumdigits(235));
	return 0;
}
