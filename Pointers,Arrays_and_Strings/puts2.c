#include <stdio.h>


void puts2(char *str);

int main(void)
{
	char test[] = "0123456789";
	puts2(test);
	
	return 0;
}

void puts2(char *str)
{

	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}


