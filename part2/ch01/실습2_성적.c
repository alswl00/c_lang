//p.73 �ǽ� 2��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {
	char Name[7];
	int A, B, C, T;
	float p;

	printf("�̸�:");
	scanf("%s", Name);
	printf("���� A:");
	scanf("%d", &A);
	printf("���� B:");
	scanf("%d", &B);
	printf("���� C:");
	scanf("%d", &C);

	T = A + B + C;
	p = (float)T / 3;

	printf("%s\t", Name);
	printf("%d\t", A);
	printf("%d\t", B);
	printf("%d\t\n", C);
	printf("����: %d\t", T);
	printf("���: %.2f\n", p);
}