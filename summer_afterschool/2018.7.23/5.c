#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j;
	scanf("%d %d", &i, &j);
	printf("�� : %d\t��� : %f\n", i + j, (float)(i + j) / 2);
	printf("�� : %f\t��� : %f\n", (float)(i + j), (float)(i + j) / 2);

	return 0;
}