#include <stdio.h>

void GetSumProduct(int x, int y, int *sum, int *product)
{
	*sum = x + y;
	*product = x * y;
}

int main() {

	int a = 5, b = 8;
	int res1, res2;
	GetSumProduct(a, b, &res1, &res2);
	printf("%d %d %d %d\n", a, b, res1, res2);
	return 0;
}