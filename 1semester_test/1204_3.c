#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char h[11];
	printf("학교명 입력 : ");
	scanf("%s", h);
	printf("이름 입력 : ");
	char n[7];
	scanf("%s", n);
	printf("%s 학생은 %s 학교에 다닙니다.\n",n,h);
	return 0;
}