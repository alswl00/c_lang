#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int menu_display(void);
void sub_main1(void);
void sub_main2(void);
void chicken_burger(void);
void cheese_burger(void);
void tomato_spa(void);
void cream_spa(void);
void press_key(void);
int main(void) {
	int c;
	while ((c = menu_display()) != 3) {
		switch (c) {
		case 1:
			sub_main1();
			break;
		case 2:
			sub_main2();
			break;
		default:break;
		}
	}
	return 0;
}

int menu_display(void) {
	int sel;
	system("cls");
	printf("간식 만들기\n\n");
	printf("1. 햄버거 \n");
	printf("2. 스파게티\n");
	printf("3. 프로그램 종료\n\n");
	printf("메뉴번호 입력>>");
	sel = getch() - 48;
	return sel;
}

void sub_main1(void) {
	int c;
	while ((c = sub_menu_display1()) != 3) {
		switch (c) {
		case 1:
			chicken_burger();
			break;
		case 2:
			cheese_burger();
			break;
		default:break;
		}
	}
}

void sub_main2(void) {
	int c;
	while ((c = sub_menu_display2()) != 3) {
		switch (c) {
		case 1:
			tomato_spa();
			break;
		case 2:
			cream_spa();
			break;
		default:break;
		}
	}
}

int sub_menu_display1(void) {
	int sel;
	system("cls");
	printf("햄버거 만들기\n\n");
	printf("1.  치킨버거\n");
	printf("2.  치즈버거\n");
	printf("3.  메인 메뉴로 이동\n\n");
	printf("메뉴번호 입력>>");
	sel = getch() - 48;
	return sel;

}

int sub_menu_display2(void) {
	int sel;
	system("cls");
	printf("스파게티 만들기\n\n");
	printf("1.  토마토 스파게티\n");
	printf("2.  크림 스파게티\n");
	printf("3.  메인 메뉴로 이동\n\n");
	printf("메뉴번호 입력>>");
	sel = getch() - 48;
	return sel;

}

void chicken_burger(void) {
	system("cls");
	printf("치킨버거 만드는 방법\n");
	printf("중략\n");
	press_key();
}

void cheese_burger(void) {
	system("cls");
	printf("치즈버거 만드는 방법\n");
	printf("중략\n");
	press_key();
}
void tomato_spa(void) {
	system("cls");
	printf("토마토 스파게티 만드는 방법\n");
	printf("중략\n");
	press_key();
}

void cream_spa(void) {
	system("cls");
	printf("크림 스파게티 만드는 방법\n");
	printf("중략\n");
	press_key();
}

void press_key(void) {
	printf("\n\n아무키나 누르면 메인 메뉴로...");
	getch();
}