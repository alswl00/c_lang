#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
	double num;
	int inum;
	int cnt=0;
	printf("실수를 입력하시오>>");
	scanf("%lf", &num);
	inum = (int)num;
	for (int i = num;i>0;i /= 10,cnt++) {	}
	printf("%d\n", cnt);
}