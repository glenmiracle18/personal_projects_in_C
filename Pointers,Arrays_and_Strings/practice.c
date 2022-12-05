#include <stdio.h>
#include <string.h>


void rev(char *string);

int main(void)
{
	char test[] = "I now understand how to code in C.";
	rev(test);

	printf("%s\n", test);
	return 0;
}

void rev(char *string)
{
	int i;
	int temp;
	int length = strlen(string);
	int middle = length / 2;
	
	for (i = 0; i < middle; i++)
	{
		
		temp = string[i];
		string[i] = string[length - i - 1];
		string[length - i - 1] = temp;
	}
}
