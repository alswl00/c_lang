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

	printf("���̸� �Է��Ͻÿ�>>");
	scanf("%d\n", &len);
	printf("��� : %s\n", right(len, a));

	return 0;
}