#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
	long num, cnt, no;
	printf("10�� ������ �Է��ϰ� enter>");
	scanf("%ld", &num);
	printf("������ �Է��ϰ� enter>");
	scanf("%ld", &no);
	printf("10���� : %ld\n", num);
	cnt = (long)(log10(num) / log10(no) + 1);
	printf("%2ld������ �ڸ��� : %ld\n", no, cnt);
	return 0;
}