#include <stdio.h>

int print_char(char c)
{
	printf("%c", c);
}

void print_alpha(void)
{
	char c;
	c = 'a';
	
	while (c <= 'z')
	{
		print_char(c);
		c++;
	}
}

int main(void)
{
	print_alpha();
	printf("\n");
	return 0;
}

