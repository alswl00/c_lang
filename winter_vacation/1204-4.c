#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* reverse(char*);
int main() {
	char *p = (char*)malloc(50);
	char *n;
	printf("������ �Է� : ");
	scanf("%[^\n]s", p);
	n = reverse(p);
	printf("��ȯ�� ���� : %s\n", n);
	free(p);
	free(n);
	return 0;
}
char* reverse(char *c) {
	int len = strlen(c);
	char *r = (char *)malloc(len + 1);
	for (int i = 0; i < len; i++)
		*(r + i) = *(c + (len - 1 - i));
	r[len] = '\0';
	return r;
}