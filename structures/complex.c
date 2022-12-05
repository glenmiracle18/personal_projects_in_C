#include <stdio.h>

typedef struct Complex {
	double real;
	double imagine;
} complex;

int main() {

	complex c1 = {.real = 21.3, .imagine = 30};
	complex c2 = {.real = 98, .imagine = 738.9};

	complex sum;

	sum.real = c1.real + c2.real;
	sum.imagine = c1.imagine + c2.imagine;

	printf("Result is %2lf + %2lfi\n", sum.real, sum.imagine);
	return 0;
}
