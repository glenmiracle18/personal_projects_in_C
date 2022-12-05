
/* Function tha prints letter of the alphabet iteratively */

#include <stdio.h>

int print_char(char c)
{
	printf("%c", c);
}

void print_alphabet(void)
{
	char c;
	c = 'A';
	
	while (c <= 'Z')
	{
		print_char(c);
		c++;
	}
	
}

/* function call */

int main(void)
{
	print_alphabet();
	print_char('\n');
	return 0;
}

