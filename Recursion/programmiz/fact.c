#include <stdio.h>

/* createa program that computes the factorial of a number
 * Take input from the user
 * Pass the input value to a function
 * Inside the function check if the number is greater than 0.
 * If true, return number multiplied by a recursive call to the function with parameter 1 less than number
 * Otherwise, return 1.
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}

int main(void)
{
	int res;
	int i;
	printf("Enter a number: ");
	scanf("%d", &i);
	res = factorial(i);
	printf("Factorial of %d is = %d\n", i, factorial(i));
	return (1);
}

				

