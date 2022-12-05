#include <stdio.h>

void print_char(char c)
{
	printf("%c", c);
}

int print_all_letters(char c)
{
	/* base case */

	if (c > 'z')
	{
		return 1;
	}
	print_char(c);
	print_all_letters(c + 1);
}

int print_alphabet (void)
{
	print_all_letters('a');
	print_char('\n');
}
	
int main(void)
{
	print_alphabet();
	
	return 0;
}

