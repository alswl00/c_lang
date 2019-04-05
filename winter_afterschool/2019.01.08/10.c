#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char* right(int l, char c[]) {
	char *b;
	int len = strlen(c);
	b = c + len - l;
	return b;
}

int main(void) {
	char a[50] = "table tennis";
	int len;

	printf("길이를 입력하시오>>");
	scanf("%d\n", &len);
	printf("결과 : %s\n", right(len, a));

	return 0;
}