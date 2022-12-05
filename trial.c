#include <stdio.h>
/**
 * modify_my_char_var - solve me
 *
 * Return: nothing.
 */

void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'k';
	ccc = 'l';
}

/**
 * main - solce me
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	modif_my_char_var(p, c);
	
	printf("value of 'c': %c\n", c);
	printf("Value of 'p': %p\n", p);

	return (0);

}
