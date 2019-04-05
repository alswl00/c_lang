#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char a[2] = { 0xa1,0xa2 };
	char c[7] = { 0xda,0xdf,0xe1,0xe3,0xbc,0xbe,0xc0 };
	int i;

	printf("특수기호 출력\n");
	printf("1: ★,    2:◆,    3:■,    4:▲,    5:♠,    6:♥,    7:♣\n");

	printf("\n번호를 입력하시오>");
	scanf("%d", &i);
	if (i <= 4)
		printf("%c%c\n", a[0], c[i - 1]);
	else
		printf("%c%c\n", a[1],c[i-1]);
	return 0;

}