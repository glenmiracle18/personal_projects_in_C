#include <stdio.h>

int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;
	n = 65;
	p = &n;

	c = 'm';
	pp = &c;

	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);

	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'pp': %p\n", pp);

	*p = 205;
	*pp = 'T';

	printf("New value of 'n': %d\n", n);
	printf("New value of '*p': %d\n", *p);
	printf("New value of 'c': %d ('%c')\n", c, c);
	printf("New value of '*pp': %d ('%c')\n", *pp, *pp);

	return (0);
}
