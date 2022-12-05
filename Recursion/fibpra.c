#include <stdio.h>

int fact(int n)
{
	if (n <= 1)
	{
		return (1);
	}

	return (n * fact(n - 1));
}

int main(void)
{
	int in;
	int out;
	printf("Please enter a number here: \n");
	scanf("%d", &in);

	out = fact(in);
	printf("The factorial of %d is %d\n", in, out);
	return 1;
}

       	

