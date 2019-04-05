#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	char fru;
	printf("알파벳을 입력하시오(A,B,C,D):");
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