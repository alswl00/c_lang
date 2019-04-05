#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include "menu.h"

//int person = 0;

void gotoxy(int x, int y) {
	//콘솔의 x,y 좌표지점
	COORD position = { 0,0 };
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

#define HEADLEFT 20
#define LEFT 20

int mainmenu();

int main(void) {
	int menu;
	int i=0;
	struct account *ac = NULL;
	ac = malloc(sizeof(struct account)*10);

	ac->balance = 0;
	while (1) {
		menu = mainmenu();
		if (menu == QUIT) break;
		switch (menu) {
		case OPEN_AC:
			Open_Ac(ac,i); i++; break;
		case PRT_AC:
			Find_Ac(ac,i); system("PAUSE"); break;
		case DEPOSIT:
			Deposit(ac, i); getchar(); break;
		case WITHDRAW:
			Withdraw(ac,i); getchar(); break;
		}
	}

	free(ac);
	return 0;
}

int mainmenu() {
	system("cls");
	int x, y;
	x = HEADLEFT, y = 1;
	gotoxy(x, y);
	printf("[은행 관리 시스템]");

	x = LEFT, y += 2;
	gotoxy(x, y); printf("[1] 계좌 개설");
	y++; gotoxy(x, y); printf("[2] 계좌 조회");
	y++; gotoxy(x, y); printf("[3] 입금");
	y++; gotoxy(x, y); printf("[4] 출금");
	y += 2; gotoxy(x, y); printf("[0] 종료");

	x = HEADLEFT; y += 2; gotoxy(x, y); printf("<메뉴선택> ___");

	int menu;
	gotoxy(x + 12, y); scanf("%d", &menu);
	if (4 < menu || menu < 0)
		mainmenu();
	return menu;
}