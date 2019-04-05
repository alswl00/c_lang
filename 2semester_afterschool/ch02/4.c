#include <stdio.h>

int GetFactorial(int n)
{
	int i, fact;
	for (i = 1, fact = 1; i <= n; i++)
		fact *= i;
	return fact;
}

int main(void) {
	printf("%d\n", GetFactorial(5));
}