#include <stdio.h>

/* Global vairables */

int g = 20;

int main(void)
{
	/* local variables */
	int a = 5;
	int b = 10;
	g = 50;

	printf("Variable a = %d, b = %d, and g = %d\n", a, b, g);
	return (0);
}

