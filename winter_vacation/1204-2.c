#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int m[4];
	int money;
	printf("�ݾ� �Է�(õ���������� �Է�) : ");
	scanf("%d", &money);
	for (int i = 0, j = 50000; i < 4; i++) {
		printf("%d���� ", j);
		m[i] = money / j;
		money -= m[i] * j;
		printf("%d��\n", m[i]);
		if (i % 2 == 0) j /= 5;
		else j /= 2;
	}

	return 0;
}