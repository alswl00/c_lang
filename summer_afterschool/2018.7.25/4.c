#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void max_c(int ,int ,int);
int main(void) {
	int i1, i2, i3;
	printf("���� �� �� �Է� : ");
	scanf("%d %d %d", &i1, &i2, &i3);
	max_c(i1,i2,i3);

	return 0;
}

void max_c(int a,int b,int c) {
	int max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	printf("���� ū �� : %d\n", max);
}