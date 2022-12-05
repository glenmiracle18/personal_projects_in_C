#include <stdio.h>

void f(int *a);
/**
 * main - illustrating array_type_decay
 *
 * Return: always 0
 */

int main(void)
{
	int *p;
	int t[10];

	p = t; /* This works because of the auto implicit conversion to (int *) */

	printf("t: %p\n", t);
	printf("t[0]: %p\n", &(t[0]));
	printf("p: %p\n", p);

	f(t);
	return (0);
}

/**
 * f - prints the value of a pointer of type int
 * @a: address of an integer we need to pint
 *
 * Return: nothing;
 */

void f(int *a)
{
	printf("a: %p\n", a);
	return;
}