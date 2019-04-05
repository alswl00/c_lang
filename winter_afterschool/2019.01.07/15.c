#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char c[3];
	printf("한글이나 영문을 입력하시오>>");
	scanf("%s", c);
	if (c[0] >= 65 && c[0] <= 122)
		printf("영문\n");
	else if ((c[0] & 0x80)!=0)
		printf("한글\n");
	else printf("\n");
	return 0;
}