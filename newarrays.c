#include <stdio.h>

int main(void)
{
	int t[10];
	int i, j;

	for ( i = 0; i < 10; i++) {
		t[i] = i + 100;
	}

	for ( j = 0; j < 10; j++) {
		printf("Element [%d] = %d\n", j, t[j]);
	}

	return 0;
}
