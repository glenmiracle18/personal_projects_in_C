#include <stdio.h>
/**
 * main - using sizeof to dynamically determine
 * the size of thpes char, int and float.
 * Retrun: Always 0.
 */

int main(void)
{
	int n;
	printf("Size of type 'char' is: %lu  bytes\n", sizeof(char));
	printf("Size of type 'int' is: %lu  bytes\n", sizeof(int));
	return 0;
}
