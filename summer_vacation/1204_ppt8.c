#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test2(int, int);
void main() {
	int a = 2, b = 5;
	int c = a + b;
	printf("Before test2 : %d, %d, %d\n", a, b, c);
	test2(a, b);
	printf("After test2 : %d, %d, %d\n", a, b, c);
}
void test2(int a, int b) {
	a += 2;
	b += 5;
	int c = a + b;
	printf("In test2 : %d, %d, %d\n", a, b, c);
}