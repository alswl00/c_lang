#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j, k;
	scanf("%d %d %d", &i, &j, &k);
	int max = i > j ? i : j;
	max = max > k ? max : k;
	printf("���� ū �� : %d\n", max);

	return 0;
}