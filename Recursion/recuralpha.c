#include <unistd.h>
#include <stdio.h>

/* fucntion that prints all letters of the alphabet recursively */
int print_char(char d)
{
	printf("%c", d);
}

void print_all_letters(char d)
{
	if (d > 'z')
	{
		return;
	}
	print_char(d);
	print_all_letters(d + 1);
}

void print_alphabet(void)
{
	print_all_letters('a');
}

/* function_call */

int main(void)
{
	print_alphabet();
	print_char('\n');
	return 0;
}

