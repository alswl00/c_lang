#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = sqrt(a*a+b*b);
	printf("%d\n", c);
	return 0;
}