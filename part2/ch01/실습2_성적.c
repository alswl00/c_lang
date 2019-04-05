//p.73 실습 2번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {
	char Name[7];
	int A, B, C, T;
	float p;

	printf("이름:");
	scanf("%s", Name);
	printf("과목 A:");
	scanf("%d", &A);
	printf("과목 B:");
	scanf("%d", &B);
	printf("과목 C:");
	scanf("%d", &C);

	T = A + B + C;
	p = (float)T / 3;

	printf("%s\t", Name);
	printf("%d\t", A);
	printf("%d\t", B);
	printf("%d\t\n", C);
	printf("총점: %d\t", T);
	printf("평균: %.2f\n", p);
}