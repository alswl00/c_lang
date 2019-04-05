#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int extraction(int, int, int);
int main(void) {
	int num;
	int r;
	printf("정수를 입력하시오>>");
	scanf("%d",&num);

	r=extraction(num, 2, 3);
	printf("%d\n", r);
}

int extraction(int n, int a, int b) {
	char c[10];
	itoa(n,c,10);
	int d=0;
	char s[10];
	int k;

	for (int j=0; j <strlen(c); j++) {
		if (j+1 == a) {
			k = j;
			for (int i = 1; i <= b; i++,k++)
				s[i-1] = c[k];
		}
	}
	int z = 1;
	for (int i = b-1; i >= 0; i--) {
		d += (s[i] - '0')*z;
		z *= 10;
	}
	return d;
}