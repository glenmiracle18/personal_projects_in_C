#include <stdio.h>

int main(void)
{
	int i,j,n;
	int x = 'A';
	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 1; i <= n; j++)
	{
		for (j = 1; j <= n; j++)
		{
			if ((i + j)%2 == 1)
			{
				printf("%c ", x++);
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	return 0;
}
	
