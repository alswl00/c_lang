#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	float i;
	scanf("%f", &i);
	printf("%.3f��Ƽ���� = %.3f��Ʈ\n", i, i / 30.48);

	return 0;
}