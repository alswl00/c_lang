#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	float h, w;
	scanf("%f %f", &h, &w);
	char a = (w <= (h - 100)*0.9) ? printf("정상\n") : printf("비만\n");

	return 0;
}