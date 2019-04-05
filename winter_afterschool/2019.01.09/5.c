#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	double number;
	long inumber;
	printf("실수를 입력하고 enter>");
	scanf("%lf", &number);
	inumber = (long)number;
	printf("입력된 값 : %lf\n", number);
	printf("정수부분 : %ld\n", inumber);
	printf("실수부분 : %lf\n", number - inumber);
	return 0;
}	