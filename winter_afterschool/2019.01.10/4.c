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
	printf("���� �����\n\n");
	printf("1. �ܹ��� \n");
	printf("2. ���İ�Ƽ\n");
	printf("3. ���α׷� ����\n\n");
	printf("�޴���ȣ �Է�>>");
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
	printf("�ܹ��� �����\n\n");
	printf("1.  ġŲ����\n");
	printf("2.  ġ�����\n");
	printf("3.  ���� �޴��� �̵�\n\n");
	printf("�޴���ȣ �Է�>>");
	sel = getch() - 48;
	return sel;

}

int sub_menu_display2(void) {
	int sel;
	system("cls");
	printf("���İ�Ƽ �����\n\n");
	printf("1.  �丶�� ���İ�Ƽ\n");
	printf("2.  ũ�� ���İ�Ƽ\n");
	printf("3.  ���� �޴��� �̵�\n\n");
	printf("�޴���ȣ �Է�>>");
	sel = getch() - 48;
	return sel;

}

void chicken_burger(void) {
	system("cls");
	printf("ġŲ���� ����� ���\n");
	printf("�߷�\n");
	press_key();
}

void cheese_burger(void) {
	system("cls");
	printf("ġ����� ����� ���\n");
	printf("�߷�\n");
	press_key();
}
void tomato_spa(void) {
	system("cls");
	printf("�丶�� ���İ�Ƽ ����� ���\n");
	printf("�߷�\n");
	press_key();
}

void cream_spa(void) {
	system("cls");
	printf("ũ�� ���İ�Ƽ ����� ���\n");
	printf("�߷�\n");
	press_key();
}

void press_key(void) {
	printf("\n\n�ƹ�Ű�� ������ ���� �޴���...");
	getch();
}