#include <stdio.h>
/**
 * main - Accessing the different elements of an array
 *
 * Return: Always 0.
 */

int main(void)
{
	int a[3];
	a[0] = 876;
	a[1] = 254;
	a[2] = 458;

	printf("First element: %d\n", a[0]);
	printf("Second element: %d\n", a[1]);
	printf("Third element: %d\n", a[2]);
	
	printf("First address: %p\n", &(a[0]));
	printf("Second address: %p\n", &(a[1]));
	printf("Third addrees: %p\n", &(a[2]));

	return (0);
}
