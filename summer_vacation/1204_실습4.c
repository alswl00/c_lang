#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int s(int n) {
	if (n < 0) n = -1 * n;
	return n;
}
void main() {
	int a;
	scanf("%d", &a);
	printf("%d�� ������ %d�̴�.\n", a, s(a));
}