#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	float i;
	scanf("%f", &i);
	printf("%.3f센티미터 = %.3f피트\n", i, i / 30.48);

	return 0;
}