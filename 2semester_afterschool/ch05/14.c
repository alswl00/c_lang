#include <stdio.h>

int main() {
	char str[256];
	char *p = NULL;
	int len;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);
	len = 0;
	p = str;
	while (*p != 0) {
		len++;
		p++;
	}
	printf("���ڿ��� ���� : %d\n", len);
	return 0;
}