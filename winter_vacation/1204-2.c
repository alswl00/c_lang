#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int m[4];
	int money;
	printf("금액 입력(천원단위까지 입력) : ");
	scanf("%d", &money);
	for (int i = 0, j = 50000; i < 4; i++) {
		printf("%d원권 ", j);
		m[i] = money / j;
		money -= m[i] * j;
		printf("%d개\n", m[i]);
		if (i % 2 == 0) j /= 5;
		else j /= 2;
	}

	return 0;
}