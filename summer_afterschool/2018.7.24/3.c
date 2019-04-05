#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float r;
	scanf("%f", &r);
	printf("면적 : %f\n둘레 : %f\n", r*r*3.14, 2 * 3.14*r);

	return 0;
}