#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int temper(int);
int main() {
	int c;
	printf("���� �Է� : ");
	scanf("%d", &c);
	printf("ȭ�� �µ� : %d\n", temper(c));
	return 0;
}
int temper(int c) {
	int f;
	f = c * 9 / 5 + 32;
	return f;
}