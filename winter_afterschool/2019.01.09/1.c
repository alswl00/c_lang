#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define sign(x) abs(x)/(x)
int main(void) {
	int number;
	printf("정수를 입력하고 enter>");
	scanf("%d", &number);
	printf("숫자의 부호:%d\n", sign(number));
	return 0;
}