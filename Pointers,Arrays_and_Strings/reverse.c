#include <stdio.h>

#include <string.h>
/**
 * print_rev - prints the reverse of string
 * @s: string to be reversed
 *
 * Return: always 0.
 */


void print_rev(char *string);

int main(void)
{
	char test[]  = "Coding is good";
	print_rev(test);
	printf("%s\n", test);
	return 0;
}

void print_rev(char *string)
{
	int i;
	int lenght = strlen(string);
	int middle = lenght / 2;
	int temp;

	for (i = 0; i < middle; i++)
	{
		temp = string[i];
		string[i] = string[lenght - i - 1];
		string[lenght - i - 1] = temp;
	}
}

