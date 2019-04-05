#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
void gotoxy(int x, int y);
void draw_badukpan(int c, int r);
void draw_dol(char,int*,int*,int,int);
int i = 0;
int main() {
	char key;
	int x=21, y=11;
	int i = 0;
	draw_badukpan(21, 21);
	do {
		gotoxy(x, y);
		key = getch();
		draw_dol(key, &x, &y, 43, 22);
	} while (key != 27);
	gotoxy(1, 22);
	return 0;
}
void draw_badukpan(int c, int r) {
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[12];
	for (i = 1; i < 12; i++)
		b[i] = 0xa0 + i;
	printf("%c%c", a, b[3]);

	for (i = 0; i < c - 1; i++)
		printf("%c%c", a, b[8]);
	printf("%c%c", a, b[4]);
	printf("\n");
	for (i = 0; i < r - 1; i++) {
		printf("%c%c", a, b[7]);
		for (j = 0; j < c - 1; j++)
			printf("%c%c", a, b[11]);
		printf("%c%c", a, b[9]);
		printf("\n");
	}
	printf("%c%c", a, b[6]);
	for (i = 0; i < c - 1; i++)
		printf("%c%c", a, b[10]);
	printf("%c%c", a, b[5]);
	printf("\n");

}
void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void draw_dol(char key, int *x1, int *y1, int x_b, int y_b) {
	switch (key) {
	case 72:
		*y1 = *y1 - 1;
		if (*y1 < 1) *y1 = 1;
		break;
	case 75:
		*x1 = *x1 - 2;
		if (*x1 < 1) *x1 = 1;
		break;
	case 77:
		*x1 = *x1 + 2;
		if (*x1 > x_b) *x1 = x_b;
		break;
	case 80:
		*y1 = *y1 + 1;
		if (*y1 > y_b) *y1 = y_b;
		break;
	case 32:
		if(i%2==0)
			printf("¡Ü"); 
		else printf("¡Û");
		i++;
		break;
	default:
		return;
	}
}
