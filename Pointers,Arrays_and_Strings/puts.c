#include <stdio.h>
#include <string.h>

void _puts(char *str);

int main(void)
{
	char *str;
	str = "Glen does not fear computers. I fear the lack of them.";
	_puts(str);
	return 0;
}


void _puts(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
