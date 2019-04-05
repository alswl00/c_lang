#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
void text_color(char *p, int n);
int main(void) {
	int num;
	char text[20];
	char color[9];
	printf("입력한 문장의 색상변경\n\n문장을 입력하고 enter>>");
	scanf("%s", text);
	system("cls");
	printf("1:파랑색  2:초록색  3:옥색\n4:빨강색  5:자주색  6:노란색\n7:흰색  8:회색  9:연한 파랑색\n0:종료\n\n");
	printf("색상번호 입력 후 enter>>");
	scanf("%d", &num);
	text_color(text, num);
	printf("입력 문장:%s", text);
	return 0;
}

void text_color(char *p, int n) {
	sprintf(p, "color 0%d", n);
	system(p);
}