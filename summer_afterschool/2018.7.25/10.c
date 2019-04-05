#include <stdio.h>

int recursion(int);
int main(void) {
	int sum;
	sum = recursion(10);
	printf("%d\n", sum);
	return 0;
}

int recursion(int n) {
	int sum;
	if (n <= 2)
		return 1;
	else
		sum = recursion(n - 1) + recursion(n - 2);
	return sum;
}