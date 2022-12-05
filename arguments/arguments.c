#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Everything inside of argv[]\n");
	
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("argc[%d] = %s\n", i, argv[i]);
	}

	printf("Arguments = %d\n", argc);
	return (0);
}
