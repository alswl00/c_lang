#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
	long num, cnt, no;
	printf("10진 정수를 입력하고 enter>");
	scanf("%ld", &num);
	printf("진수를 입력하고 enter>");
	scanf("%ld", &no);
	printf("10진수 : %ld\n", num);
	cnt = (long)(log10(num) / log10(no) + 1);
	printf("%2ld진법의 자리수 : %ld\n", no, cnt);
	return 0;
}