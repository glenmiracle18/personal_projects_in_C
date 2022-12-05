#include <stdio.h>

/** 
 * A funtion that sums all the single digits in a number
 * BASE CASE - when n = 0.
 * return: always 1
 */

int sumdigit(int n)
{
	/* base case */
	if (n <= 9)
	{
		return n;
	}
	return ((n % 10) + sumdigit(n / 10));
}

int main(void)
{
	int i;
	i = sumdigit(69878);
	printf("%d\n", i);
	return 1;
}

