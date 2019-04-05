#include <stdio.h>
#include <Windows.h>
void gotoxy(int x, int y);
int main() {
	int i;
	for (i = 1; i < 40; i++) {
		if (i % 2 == 0) {
			gotoxy(i, 5);
			printf("бс");
			Sleep(100);
			gotoxy(i, 5);
			printf("  ");
			Sleep(100);
		}
		else {
			gotoxy(i, 5);
			printf("б▀");
			Sleep(100);
			gotoxy(i, 5);
			printf("  ");
			Sleep(100);
		}
	}
	return 0;
}
void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}