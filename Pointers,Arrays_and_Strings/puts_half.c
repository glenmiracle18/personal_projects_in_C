#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: the string to be printed in half
 *
 * return: 0.
 */

void puts_half(char *str);

int main(void)
{
	char test[] = "Print me in the middle";
	puts_half(test);
	printf("%s\n", test);
	return 0;
}

void puts_half(char *str)
{
	int i = 0;
	int length = strlen(str);
	int middle = length / 2;
	while (i <= middle)
	{
	       putchar(str[i]);
	       i++;
		break;
		
	}
	putchar('\n');
}

