#include <stdio.h>
#include <string.h>



void rev_string(char *s);

int main(void)
{
	char test[] = "This is a test";
	rev_string(test);
	printf("%s\n", test);
	return 0;
}



void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char temp;

	while (s[i] != '\0')
		i++;
	i--;

	while (aux < i)
	{
		temp = s[i];
		s[i] = s[aux];
		s[aux] = temp;

		aux++;
		i--;
	}
}
