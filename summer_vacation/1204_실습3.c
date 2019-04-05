#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p(int a, int b) {
	int s;
	if (a > b) s = a - b;
	else s = b - a;
	return s;
}
void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", p(a, b));
}