#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char c; int i;
	printf("대문자 입력 : ");
	scanf("%c", &c);
	i = (int)(c + 32);
	if (i < 97 || i>122)
		printf("입력 문자 오류 : 영문 대문자를 입력하세요.\n");
	else
		printf("소문자 변환 : %c\n", i);


	return 0;
}