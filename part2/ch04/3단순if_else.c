#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int A;
	printf("A를 입력하시오\n");
	scanf("%d", &A);
	if (A<0)
		printf("%d 절대값:%d\n",A,A);
	else
		printf("%d 절대값:%d\n",A,-A);
}