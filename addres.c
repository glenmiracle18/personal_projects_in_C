#include <stdio.h>
/**
 * main - prints out the address that stores the variable
 * Return: Always 0.
 */

int main(void)
{
	char m;
	int g;

	printf("Address of 'm' is: %p\n", &m);
	printf("Address of 'g' is: %p\n", &g);
	return 0;
}
