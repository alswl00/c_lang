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
	printf("1���� �Է�(-128~127):");
	scanf_s("%c", &ch2, 1);
	printf("1byte ���� �Է�(-128~127):");
	scanf_s("%hhd", &n2);
	printf("2byte ���� �Է�(-2��15����~2��15����-1):");
	scanf_s("%hd", &sh2);
	printf("4byte ���� �Է�(-2��31����~2��31����-1:)");
	scanf_s("%d", &k2);
	printf("4byte ���� �Է�(-2��31����~2��31����-1):");
	scanf_s("%ld", &k3);
	printf("8byte ���� �Է�:(-2��63����~2��63����-1):");
	scanf_s("%lld", &k4);
	printf("8byte ���� �Է�:(-2��63����~2��63����-1):");
	scanf_s("%lld", &k5);
	printf("%c,%c,%hhd,%hhd,%hd,%hd,%u,%d,%ld,%lld,%lld\n", ch1, ch2, n1, n2, sh1, sh2, k1, k2, k3, k4, k5);
	return 0;
}