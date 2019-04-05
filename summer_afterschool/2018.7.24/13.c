#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int month;
	scanf("%d", &month);
	if (month < 1 || month>12) {
		printf("잘못 입력하셨습니다.\n");
		return;
	}
	if (month <= 3)
		printf("1사분기\n");
	else if (month <= 6)
		printf("2사분기\n");
	else if (month <= 9)
		printf("3사분기\n");
	else
		printf("4사분기\n");

	return 0;
}