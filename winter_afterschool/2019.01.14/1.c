#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
void draw_check02(int column, int row);
void gotoxy(int x, int y);
void number_display(int);
int main(void) {
	int row, column;
	printf("확장된 바둑판 그리기\n\n");
	printf("가로 세로의 길이를 space로 \n");
	printf("분리하여 입력하고 enter>");
	scanf("%d %d", &column, &row);
	system("cls");
	draw_check02(4,4);
	number_display(row);
	return 0;
}
void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void draw_check02(int c, int r) {
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[12];
	for (i = 1; i < 12; i++)
		b[i] = 0xa0 + i;

	printf("%c%c", a, b[3]);

	for (i = 0; i < c - 1; i++) {
		printf("%c%c", a, b[1]);
		printf("%c%c", a, b[8]);
	}

	printf("%c%c", a, b[1]);
	printf("%c%c", a, b[4]);
	printf("\n");

	for (i = 0; i < r - 1; i++) {
		printf("%c%c", a, b[2]);

		for (j = 0; j < c; j++) {
			printf(" ");
			printf("%c%c", a, b[2]);
		}
		printf("\n");
		printf("%c%c", a, b[7]);

		for (j = 0; j < c - 1; j++) {
			printf("%c%c", a, b[1]);
			printf("%c%c", a, b[11]);
		}
		printf("%c%c", a, b[1]);
		printf("%c%c", a, b[9]);
		printf("\n");
	}

	printf("%c%c", a, b[2]);

	for (j = 0; j < c; j++) {
		printf(" ");
		printf("%c%c", a, b[2]);
	}
	printf("\n");
	printf("%c%c", a, b[6]);

	for (j = 0; j < c - 1; j++) {
		printf("%c%c", a, b[1]);
		printf("%c%c", a, b[10]);
	}

	printf("%c%c", a, b[1]);
	printf("%c%c", a, b[5]);
	printf("\n");

}
void number_display(int n) {
	int i, j, cnt = 1;
	for(i=0;i<n;i++)
		for (j = 0; j < n; j++) {
			gotoxy(3 + 4 * j, 2 + 2 * i);
			printf("%2d", cnt);
			cnt++;
		}
}