#include <stdio.h>

int main() {
	char str[256];
	char *p = NULL;
	int len;

	printf("문자열을 입력하세요 : ");
	gets(str);
	len = 0;
	p = str;
	while (*p != 0) {
		len++;
		p++;
	}
	printf("문자열의 길이 : %d\n", len);
	return 0;
}