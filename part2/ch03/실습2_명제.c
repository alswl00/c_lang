//p.108 �ǽ�2��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	int a = x / y;
	int b = x % y;
	if (y == x * a + b) {
		printf("�����Ѵ�\n");
	}
	else { printf("�������� �ʴ´�\n"); }

	return 0;
}