#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char c; int i;
	printf("�빮�� �Է� : ");
	scanf("%c", &c);
	i = (int)(c + 32);
	if (i < 97 || i>122)
		printf("�Է� ���� ���� : ���� �빮�ڸ� �Է��ϼ���.\n");
	else
		printf("�ҹ��� ��ȯ : %c\n", i);


	return 0;
}