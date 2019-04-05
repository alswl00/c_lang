#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void test1(int);

int main() {
	int x = 10;
	printf("Before test1 : %d\n", x);
	test1(x);
	printf("After test1 : %d\n", x);
	return 0;
}

void test1(int x) {
	x++;
	printf("In test1 : %d\n", x);
}