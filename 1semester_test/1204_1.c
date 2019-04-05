#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int g,s,h;
	printf("가로 : ");
	scanf("%d", &g);
	printf("세로 : ");
	scanf("%d", &s);
	printf("높이 : ");
	scanf("%d", &h);
	printf("가로 : %d, 세로가 %d, 높이가 %d인 사각형의 체적은 %d이다.\n", g, s, h, g*s*h);


	return 0;
}