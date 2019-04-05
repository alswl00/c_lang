#pragma warning(disable:4996)
#include <stdio.h>
#include <windows.h>
void draw_line(int a, int b);
void axis(void);
void gotoxy(int x, int y);
int main(void) {
	int x1, x2, y1, y2;
	int a, b;
	printf("첫번째 좌표값(x,y) 입력>>");
	scanf("%d %d", &x1, &y1);
	printf("두번째 좌표값(x,y) 입력>>");
	scanf("%d %d", &x2, &y2);
	a = (y1 - y2) / (x1 - x2);
	b = y1 - x1 * a;
	system("cls");
	axis();
	draw_line(a, b);
	gotoxy(1, 23);
	return 0;
}

void draw_line(int a, int b) {
	int x, y, xt, yt;
	gotoxy(1, 1);
	printf("y=%dx%+d\n", a, b);
	for (x = -5; x <= 5; x += 1) {
		y = a * x + b;
		xt = 39 + 2 * x;
		yt = 12 - y;
		if ((1 <= yt) && (yt <= 23)) {
			gotoxy(xt, yt);
			printf("*");
		}
	}
}

void axis(void) {
	int i;
	for (i = 1; i <= 24; i += 1) {
		gotoxy(39, i);
		printf("|");
	}
	for (i = 1; i <= 79; i += 1) {
		gotoxy(i, 12);
		printf("-");
	}
	gotoxy(39, 12);
	printf("+");
}

void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}