//p.108 �ǽ� 1��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	//(A == 1) ? printf("�հ�") : (B > 90) ? (C > 50) ? printf("�հ�") : printf("���հ�") : printf("���հ�");
	(A == 1) || (B > 90 && C > 50) ? printf("�հ�\n") : printf("���հ�\n");
}