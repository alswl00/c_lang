#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j,b,s;
	scanf("%d %d", &i, &j);
	/*if (i > j) {
		b = i; s = j;
	}
	else {
		b = j; s = i;
	}
	printf("�� : %d\t������ : %d\n", b / s, b%s);*/

	int a = (i > j) ? printf("�� : %d\t������ : %d\n", i / j, i%j) : printf("�� : %d\t������ : %d\n", j / i, j%i);
	return 0;
}