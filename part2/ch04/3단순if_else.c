#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int A;
	printf("A�� �Է��Ͻÿ�\n");
	scanf("%d", &A);
	if (A<0)
		printf("%d ���밪:%d\n",A,A);
	else
		printf("%d ���밪:%d\n",A,-A);
}