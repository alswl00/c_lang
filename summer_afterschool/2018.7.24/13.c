#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int month;
	scanf("%d", &month);
	if (month < 1 || month>12) {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		return;
	}
	if (month <= 3)
		printf("1��б�\n");
	else if (month <= 6)
		printf("2��б�\n");
	else if (month <= 9)
		printf("3��б�\n");
	else
		printf("4��б�\n");

	return 0;
}