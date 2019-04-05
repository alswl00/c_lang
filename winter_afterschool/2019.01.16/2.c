#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void gotoxy(int x, int y);
int main() {
	int x = 0, y = 1, temp = 2, cnt = 0;
	while (cnt < 3) {
		x += temp;
		if (x > 20)
			temp = -2;
		if (x < 2) {
			temp = 2; 
			cnt++;
		}
		system("cls");
		gotoxy(x, y);
		printf("бр");
		Sleep(50);
	}
	printf("\n");
	return 0;
}
void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}