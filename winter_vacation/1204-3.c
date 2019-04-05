#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int change(char[]);
int main() {
	char num[9];
	printf("2진수 입력(8자리) : ");
	scanf("%s", num);

	printf("10진수 : %d\n", change(num));
	return 0;
}
int change(char c[]) {
	int sum = 0;
	for (int i = 0; i < 8; i++)
		sum += (int)(c[7 - i] - '0') * (int)(pow(2, i));
	return sum;
}