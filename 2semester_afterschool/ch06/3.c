#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TEST(x) if(x<0) \
							printf("�����Դϴ�\n");\
						else if(x>0)\
						printf("����Դϴ�\n");\
						else\
						printf("0�Դϴ�\n");

int main(void) {
	int a;
	scanf("%d", &a);
	TEST(a);
}