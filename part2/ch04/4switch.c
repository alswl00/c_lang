#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	char fru;
	printf("���ĺ��� �Է��Ͻÿ�(A,B,C,D):");
	scanf("%c", &fru);
	switch (fru) {
	case 'A':case 'a':printf("Apple\n");
	case 'B':case 'b':printf("Banana\n");
	case 'C':case 'c': printf("Coconut\n");
	case 'D':case 'd':printf("Durian\n"); break;
	default:printf("Error\n");
	}
	return 0;
}