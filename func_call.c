#include <stdio.h>
/**
 * modiify_my_param - set the int to 402
 * @m: a pointer the integer we want to set to 402
 * Return: nothing.
 */

void modif_my_param(int *m)
{
	printf("Value of 'm': %p\n", m);
	printf("Address of 'm': %p\n", &m);
	*m = 402;
}

/**
 * main - how to change the value of a variable from outside the function.
 * it is declared in, usint a pointer.
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int *p;
	p = &n;
	n = 98;
	printf("Value of 'n' befor call: %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);

	modif_my_param(p);
	printf("Value of 'n' after call: %d\n", n);
	return (0);
}
