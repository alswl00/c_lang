#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	scanf("%d", &a);
	printf("%dkm => %fmile\n", a, a*0.621371);

	return 0;
}