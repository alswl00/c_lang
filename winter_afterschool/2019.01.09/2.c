#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	long number;
	printf("입력된 정수의 부호 바꾸기\n");
	printf("숫자(부호포함)입력 후 enter>");
	scanf("%ld", &number);
	printf("입력된 정수:%ld\n", number);
	number = ~number + 1;
	printf("부호 바뀐 값:%ld\n", number);
	return 0;
}