#include <stdio.h>

/**
 * main - solve me
 *
 * Return: Always 0.
 */

int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 448;
	
	printf("Value of 'a[0]': %d\n", a[0]);
	printf("Value of 'a[1]': %d\n", *(a + 1));
	printf("Value of 'a[2]': %d\n", *(a + 2));
	printf("_____________________\n");

	printf("Address of 'a': %p\n", &a);
	printf("Address of 'a[0]': %p\n",&( a[0]));
	printf("Address of 'a[3]': %p\n", &(a[3]));
	printf("#####################\n");

	p = a + 1;
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;

	printf("p: (which is equivalent to the address of *(a + 1) %p\n", p);
	printf("p + 3: (which is same as the address of a[3] %p\n", &(*(a + 3)));
	return (0);
}


