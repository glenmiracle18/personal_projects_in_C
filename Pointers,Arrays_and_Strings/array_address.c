#include <stdio.h>

int main(void)
{
	int a[98];
	
	printf("a address: %p\n", a);
	printf("a[0] address: %p\n", &(a[0]));
	printf("The address of  the first element in the array is equal to the general address of the entire array.");
	
	return (0);
}
