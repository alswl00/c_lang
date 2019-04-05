#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pow(int,int);
int main(void) {
	int m, n;
	printf("두개의 정수 입력 : ");
	scanf("%d %d", &m,&n);
	int mult = pow(m, n);
	printf("%d\n", mult);
	return 0;
}
int pow(int m, int n) {
	int mult=1;
	for (int i = 1; i <= n; i++) {
		mult *=m;
	}
	return mult;
}