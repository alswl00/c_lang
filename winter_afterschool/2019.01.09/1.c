#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define sign(x) abs(x)/(x)
int main(void) {
	int number;
	printf("������ �Է��ϰ� enter>");
	scanf("%d", &number);
	printf("������ ��ȣ:%d\n", sign(number));
	return 0;
}