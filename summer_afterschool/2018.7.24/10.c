#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i;
	scanf("%d", &i);
	printf("%c\n%o\n%d\n%x\n", i, i, i, i);

	return 0;
}