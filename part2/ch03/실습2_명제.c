//p.108 실습2번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	int a = x / y;
	int b = x % y;
	if (y == x * a + b) {
		printf("성립한다\n");
	}
	else { printf("성립하지 않는다\n"); }

	return 0;
}