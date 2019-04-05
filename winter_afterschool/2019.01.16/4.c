#include <stdio.h>
#include <Windows.h>
void gotoxy(int x, int y);
int main() {
	int y, check = 24;
	do {
		for (y = 25 - check; y < 24; y++) {
			gotoxy(5, y);
			printf("¡Ü");
			Sleep(10);
			system("cls");
		}
		check = (check - check / 2);
		for (y = 24; y > 24 - check; y--) {
			gotoxy(5, y);
			printf("¡Ü");
			Sleep(10);
			system("cls");
		}
	} while (check != 1);

	return 0;
}
void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}