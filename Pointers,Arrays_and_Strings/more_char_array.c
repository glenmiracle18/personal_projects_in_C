#include <stdio.h>

/** main - prints the value of a string
 *
 * Return: Always 0.
 */

int main(void)
{
	char a[9] = "School";

	printf("first element: %c\n", a[0]);
	printf("Value of the char of 'a': %d\n", a[9]);
	printf("Value of \"school\": %p\n", "School");
	
	return 0;
}
