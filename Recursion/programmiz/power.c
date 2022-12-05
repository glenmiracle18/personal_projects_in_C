#include <stdio.h>

int power(int x, int y)
{
	if (y == 1)
	{
		return x;
	}
	
	if (x == 0)
	{
		return 0;
	}

	if (y == 0)
	{
		return 1;
	}

	if (y != 0)
	{
		return (x * power(x, y - 1));
	}
	else
		return 1;

}

int main(void)
{
	int base, raise, result;

	printf("Enter a base number: ");
	scanf("%d", &base);

	printf("Enter a power number: ");
	scanf("%d", &raise);

	result = power(base, raise);
	printf("%d ^ %d = %d\n", base, raise, result);
	return 1;
}


