#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int change(int *a,char *num);

int main() {
	char num[9];
	int sum=0;
	int a[8] = { 128,64,32,16,8,4,2,1};
	printf("2진수 입력(8자리) : ");
	scanf("%s", num);

	sum=change(a, num);

	printf("10진수 : %d\n", sum);
}

int change(int *a,char *num) {
	int sum=0;
	for (int i = 0; i < 8; i++) {
		if (num[i] == '1') 
			sum += a[i];
	}
	return sum;
}