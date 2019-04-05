#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TEST(x) if(x<0) \
							printf("음수입니다\n");\
						else if(x>0)\
						printf("양수입니다\n");\
						else\
						printf("0입니다\n");

int main(void) {
	int a;
	scanf("%d", &a);
	TEST(a);
}