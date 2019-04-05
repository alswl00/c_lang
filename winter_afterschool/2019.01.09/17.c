#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>
#include <windows.h>
void gotoxy(int, int);
void gotoxy_str(char*, int, int);

int main(void) {
	int x,y;
	printf("좌표를 입력하시오>>");
	scanf("%d %d", &x,&y);

	gotoxy_str("time", x, y);
}

void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void gotoxy_str(char *c, int a, int b) {
	gotoxy(a, b);
	printf("%s\n", c);

}