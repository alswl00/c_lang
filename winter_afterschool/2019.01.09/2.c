#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	long number;
	printf("�Էµ� ������ ��ȣ �ٲٱ�\n");
	printf("����(��ȣ����)�Է� �� enter>");
	scanf("%ld", &number);
	printf("�Էµ� ����:%ld\n", number);
	number = ~number + 1;
	printf("��ȣ �ٲ� ��:%ld\n", number);
	return 0;
}