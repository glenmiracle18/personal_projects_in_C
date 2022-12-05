#include <stdio.h>

int main(void)
{
	char c;
	char *p;
	p = &c;
	printf("Address of 'c': %p\n", &c);
	printf("value of 'p': %p\n", p);
	return 0;
}
