#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "c.h"

int main() {
	int a, b;
	input_value(&a, &b);
	print_value(a, b);
	exchange(&a, &b);
	print_value(a, b);
	return 0;
}

void input_value(int *ap, int *bp) {
	printf("두 정수값을 입력하세요 : ");
	scanf("%d%d", ap, bp);
}