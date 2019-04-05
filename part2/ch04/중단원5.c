#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int a = 1, b = 1, k = 0, n;
	scanf("%d", &n);
	while (k < n) {
		a = a + b;
		b = a - b;
		k = k + 1;
	}
	printf("%d %d\n", a, b);
}