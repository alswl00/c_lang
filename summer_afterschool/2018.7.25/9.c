#include <stdio.h>

int recursion(int);
int main(void) {
	int sum;
	sum = recursion(20);
	printf("%d\n", sum);
	return 0;
}

int recursion(int n) {
	int sum;
	if (n <= 1)
		return 1;
	else
		sum = n + recursion(n - 1);
}