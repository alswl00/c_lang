#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void CallValue(int x, int y) {
	printf("Value : %d, %d\n", x++, ++y);
}

void CallPointer(int *x, int *y) {
	printf("Pointer : %d, %d\n", (*x)++, ++(*y));
}

void main() {
	int a = 3, b = 4;
	CallValue(a, b);
	CallPointer(&a, &b);
	printf("ÃÖÁ¾°ª : %d, %d\n", a, b);
}