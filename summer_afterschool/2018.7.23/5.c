#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j;
	scanf("%d %d", &i, &j);
	printf("Че : %d\tЦђБе : %f\n", i + j, (float)(i + j) / 2);
	printf("Че : %f\tЦђБе : %f\n", (float)(i + j), (float)(i + j) / 2);

	return 0;
}