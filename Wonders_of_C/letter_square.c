#include <stdio.h>

int main()
{
	int i, j;
	for (i = 'A'; i <= 'Z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (j<i)
			{
				printf("%c ", i);
			}
			else
			{
				printf("%c ", j);
			}
		}
		printf("\n");
	}
	return 0;
}
