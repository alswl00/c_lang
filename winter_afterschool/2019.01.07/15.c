#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char c[3];
	printf("�ѱ��̳� ������ �Է��Ͻÿ�>>");
	scanf("%s", c);
	if (c[0] >= 65 && c[0] <= 122)
		printf("����\n");
	else if ((c[0] & 0x80)!=0)
		printf("�ѱ�\n");
	else printf("\n");
	return 0;
}