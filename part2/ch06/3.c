#include <stdio.h>

int sum(int a, int b) {
	int sum;
	sum = a + b;
	return sum, a, b;   //�� �������� b�� ����
}

void main() {
	int k = sum(3, 5);
	printf("%d\n", k);
}