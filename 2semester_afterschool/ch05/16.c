#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, num;
	int *p = NULL;
	printf("�迭�� ũ�⸦ �����ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

	p = malloc(num * sizeof(int));

	for (i = 0; i < num; i++,p++)
		scanf("%d",p);

	p -= num;

	for (i = 0; i < num; i++, p++)
		printf("%3d", *p);
	printf("\n");

	p -= num;

	free(p);

	return 0;
}