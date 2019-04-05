#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isDigit(char num);

int main() {
	int num, ret;
	scanf("%c", &num);
	ret = isDigit(num);
	printf("%d\n", ret);
}

int isDigit(char num) {
	return '0' <= num && num <= '9';
}