#include <stdio.h>

int fibo(int n)
{
	if (n == 1){
		return 1;
	}
	if (n == 0){
		return 0;
	}
	
	return (fibo(n - 1) + fibo(n - 2));
}

int main(void)
{
	int i;
	int j;
	printf("Enter a number to find its fibonaccci: ");
	scanf("%d", &j);
	
	for (i = 0; i < j; i++)
	{
		printf("%d\n", fibo(i));
		
	}
	return 1;
}
		
