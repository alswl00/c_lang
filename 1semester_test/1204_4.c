#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int p, r, c, t;
	printf("������ �п�ǰ�� ������ �Է��Ͻÿ�.\n");
	printf("���� �� ���� : ");
	scanf("%d %d %d", &p, &r, &c);
	t = p * 100 + r * 250 + c * 3000;
	printf("�� ���� �ݾ��� %d���Դϴ�.\n", t);
	return 0;
}