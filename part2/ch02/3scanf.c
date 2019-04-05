//p.84 예 2-19

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	int k;

	k = printf("%d+%d=%d\n", x, y, x + y);
	printf("%d\n", k);
	printf("%d-%d=%d\n", x, y, x - y);
	printf("%d*%d=%d\n", x, y, x * y);
	printf("%d/%d=%d\n", x, y, x / y);
	printf("%d%%%d=%d\n", x, y, x % y);		//%(나머지)를 사용할 때는 %%로 써야함
	printf("\n");

}