#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	double number;
	long inumber;
	printf("�Ǽ��� �Է��ϰ� enter>");
	scanf("%lf", &number);
	inumber = (long)number;
	printf("�Էµ� �� : %lf\n", number);
	printf("�����κ� : %ld\n", inumber);
	printf("�Ǽ��κ� : %lf\n", number - inumber);
	return 0;
}	