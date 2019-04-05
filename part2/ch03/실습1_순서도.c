//p.108 실습 1번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	//(A == 1) ? printf("합격") : (B > 90) ? (C > 50) ? printf("합격") : printf("불합격") : printf("불합격");
	(A == 1) || (B > 90 && C > 50) ? printf("합격\n") : printf("불합격\n");
}