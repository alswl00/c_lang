#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main() {
	int a, b, k;
	char ch[20];
	scanf("%s", ch);
	k = strlen(ch);
	for (a = 0; a <= k - 1; a++) {
		for (b = k - a - 1; b <= k - 1; b++)
			printf("%c", ch[b]);
		printf("\n");
	}
}