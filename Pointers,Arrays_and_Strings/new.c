#include <stdio.h>
int main(void)
{
	char b[45];

	printf("b: %p\n", b);
	printf("&b: %p\n", &b);
	printf("Size of b: %lu\n", sizeof(b));
	printf("Size of &b: %lu\n", sizeof(&b));
	return 0;
}
