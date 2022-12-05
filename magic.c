#include <stdio.h>

int main(void)
{
	int i,j,n;
	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = n; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			if (i%2 != 0)
				printf("%d ", j);
			else
				printf("%d ", (i + 1 - j));
		}
		printf("\n");
	}
	return 0;
}
