#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int main(void) {
	/*9gotoxy(2, 4);
	printf("Hello");
	gotoxy(40, 20);
	printf("Hello\n");*/

	for (int i = 0; i <= 10; i++) {
		gotoxy(i, i);
		system("cls");
		printf("*");
	}
	return 0;
}