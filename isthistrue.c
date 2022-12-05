#include <stdio.h>

int main(void)
{
	int i, j, n;
	int x=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i=1;j<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%2d #", x++);
		}
		printf("\n");
	}
	return 0;
}
