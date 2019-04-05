#include <stdio.h>

int sum(int a, int b) {
	int sum;
	sum = a + b;
	return sum, a, b;   //맨 마지막인 b만 리턴
}

void main() {
	int k = sum(3, 5);
	printf("%d\n", k);
}