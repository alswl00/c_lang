#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[256];
	char *p = str;
	char *q=NULL;
	int len;

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	len = strlen(str);

	p = str;
	q = p + len - 1;
	for (int i = 0; i < len / 2; i++,p++,q--) {
		char temp = *p;
		*p = *q;
		*q = temp;
	}
		printf("%s", str);
	printf("\n");
}