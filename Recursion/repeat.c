#include <stdio.h>

void print_char(int* c)
{
	printf("%c", *c);
}

int print_alpha()
{
	char c;
	c = "A";

	while (c < "Z")
	{
		print_char(c);
		c++;
	}
	return 0;
}

int main(void)
{
	print_alpha();
	print_char("\n");
	return (0);
}
