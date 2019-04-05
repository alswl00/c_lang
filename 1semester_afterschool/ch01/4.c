#include <stdio.h>
int main(void) {
	char ch1 = 'A', ch2;
	__int8 n1 = 127, n2;
	short sh1 = 32767, sh2;
	unsigned int k1 = 50000;
	int k2;
	long k3;
	long long k4;
	__int64 k5;
	printf("1문자 입력(-128~127):");
	scanf_s("%c", &ch2, 1);
	printf("1byte 정수 입력(-128~127):");
	scanf_s("%hhd", &n2);
	printf("2byte 정수 입력(-2의15제곱~2의15제곱-1):");
	scanf_s("%hd", &sh2);
	printf("4byte 정수 입력(-2의31제곱~2의31제곱-1:)");
	scanf_s("%d", &k2);
	printf("4byte 정수 입력(-2의31제곱~2의31제곱-1):");
	scanf_s("%ld", &k3);
	printf("8byte 정수 입력:(-2의63제곱~2의63제곱-1):");
	scanf_s("%lld", &k4);
	printf("8byte 정수 입력:(-2의63제곱~2의63제곱-1):");
	scanf_s("%lld", &k5);
	printf("%c,%c,%hhd,%hhd,%hd,%hd,%u,%d,%ld,%lld,%lld\n", ch1, ch2, n1, n2, sh1, sh2, k1, k2, k3, k4, k5);
	return 0;
}