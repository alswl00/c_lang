#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main_menu(void);
void sub_main1(void);
void sub_main2(void);
int sub_menu_display1(void);
int sub_menu_display2(void);
void want_dis(void);
void all_dis(void);
void wrong(void);
void time_q(void);
void all_time(void);
void rate(void);
void gotoxy(int x, int y);
void press_key(void);

int main(void) {
	int c;
	srand((unsigned)time(0));
	while ((c = main_menu()) != 3) {
		switch (c) {
		case 1:
			sub_main1();
			system("cls");
			break;
		case 2:
			sub_main2();
			system("cls");
			break;
		default:break;
		}
	}
	return 0;
}

int main_menu(void) {
	int sel, i = 5;
	gotoxy(5, i++);
	printf("������ �н� ���α׷�");
	i++;
	gotoxy(5, i++);
	printf("1.������ ����");
	gotoxy(5, i++);
	printf("2.������ ����Ǯ��");
	gotoxy(5, i++);
	printf("3.����");
	gotoxy(5, i++);
	printf("�޴���ȣ �Է�>>");
	sel = getch() - 48;
	if (sel == 3) gotoxy(5, i++);
	return sel;
}

void sub_main1(void) {
	int c;
	while ((c = sub_menu_display1()) != 3) {
		switch (c) {
		case 1:
			want_dis();
			break;
		case 2:
			all_dis();
			break;
		default:break;
		}
	}
}

void sub_main2(void) {
	int c;
	while ((c = sub_menu_display2()) != 5) {
		switch (c) {
		case 1:
			wrong();
			break;
			case 2:
			time_q();
			break;
			case 3:
			all_time();
			break;
			case 4:
				rate();
				break;
		default:break;
		}
	}
}

int sub_menu_display1(void) {
	int sel, i = 5;
	system("cls");
	gotoxy(5, i++);
	printf("������ ����\n\n");
	i++;
	gotoxy(5, i++);
	printf("1.  ���ϴ� �ܸ� ����\n");
	gotoxy(5, i++);
	printf("2.  ��ü ����\n");
	gotoxy(5, i++);
	printf("3.  ���� �޴��� �̵�\n\n");
	gotoxy(5, i++);
	printf("�޴���ȣ �Է�>>");
	sel = getch() - 48;
	return sel;

}

int sub_menu_display2(void) {
	int sel, i = 5;
	system("cls");
	gotoxy(5, i++);
	printf("������ ����Ǯ��\n\n");
	i++;
	gotoxy(5, i++);
	printf("1.  Ʋ������ �ٽ�Ǯ��\n");
	gotoxy(5, i++);
	printf("2.  ���ѽð� ���� Ǯ��\n");
	gotoxy(5, i++);
	printf("3.  ���� Ǭ �� �ð� ǥ��\n");
	gotoxy(5, i++);
	printf("4.  �� ���� ������ ǥ��\n");
	gotoxy(5, i++);
	printf("5.  ���� �޴��� �̵�\n\n");
	gotoxy(5, i++);
	printf("�޴���ȣ �Է�>>");
	gotoxy(5, i++);
	sel = getch() - 48;
	return sel;
}

void want_dis(void) {
	int num, i = 5;
	system("cls");
	gotoxy(5, i++);
	printf("���ϴ� �ܸ� ����\n");
	i++;
	gotoxy(5, i++);
	printf("���ϴ� �� �Է�>>");
	scanf("%d", &num);
	gotoxy(5, i++);
	for (int i = 1; i <= 9; i++) {
		gotoxy(5, 8 + i);
		printf("%d * %d = %d\n", num, i, num*i);
	}
	press_key();
}

void all_dis(void) {
	system("cls");
	printf("��ü ����\n");
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			gotoxy(i * 8 - 7, 2 + j);
			printf("%d*%d=%d\n", i, j, i*j);
		}
	}
	press_key();
}

void wrong(void) {
	int a[11], b[11], c[11], cnt = 0, j = 1;
	char check[11];
	for (int i = 0; i <= 10; i++) check[i] = 'X';
	system("cls");
	for (int i = 1; i <= 10; i++) {
		a[i] = rand() % 9 + 1;
		b[i] = rand() % 9 + 1;
	}
	while (j <= 2) {
		gotoxy(5, 5);
		printf("Ʋ������ �ٽ�Ǯ��");
		if (cnt == 10) break;
		for (int i = 1; i <= 10; i++) {
			gotoxy(10, i + 6);
			if (check[i] == 'X')
				printf("����%2d>%d*%d=?", i, a[i], b[i]);
		}

		for (int i = 1; i <= 10; i++) {
			gotoxy(21, i + 6);
			if (check[i] == 'X') {
				scanf("%d", &c[i]);
				if (c[i] == a[i] * b[i]) {
					cnt++;
					check[i] = 'O';
					if (j == 2) {
						gotoxy(24, i + 6);
						printf("%c", check[i]);
					}
				}
				else {
					check[i] = 'X';
					if (j == 2) {
						gotoxy(24, i + 6);
						printf("%c", check[i]);
					}
				}
			}
		}
		if (j == 1) {
			gotoxy(10, 18);
			printf("%d���Դϴ�.\n", cnt * 10);
			getch();
			system("cls");
		}
		j++;
	}
	gotoxy(10, 18);
	printf("�����ϼ̽��ϴ�");
	press_key();
}
void time_q(void)
{
	//  int min;
	time_t fi, si;
	// �ǽ¼� x, �¼� y, ����� �Է°�dap,��
	//
	int x[11], y[11], dap[11];
	// ���� �������� count, ��ȯ ���� i
	// �� �ð� ���� timesum, ���ѽð�timecheck
	int count, i, timesum, timecheck;
	// ä����� ����
	char check[11];
	system("cls");
	gotoxy(10, 2);
	printf("����ڰ� ������ ���ѽð� ���� ����Ǯ��");
	gotoxy(10, 3);
	printf("���ѽð�(��)�� �Է��ϼ���");
	scanf("%d", &timecheck);

	//���� ����(����)

	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
	}

	//���� ���
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("���� %2d>  %d*%d=? \n", i, x[i], y[i]);
	}
	count = 0;
	//���� Ǯ�� ���� ��� ������ Ʋ�ȴٰ�(X) ������
	for (i = 1; i <= 10; i++)
		check[i] = 'X';
	//���� �ð� ����
	time(&fi);
	//������� �� �Է�
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(24, i + 5);
		scanf("%d", &dap[i]);
		if (dap[i] == x[i] * y[i])
		{
			count = count + 1;
			check[i] = 'O';
		}
		else
			check[i] = 'X';
		time(&si);
		timesum = si - fi;
		gotoxy(10, 4);
		printf(" ����ð� : %2d �� ", timesum);
		//����ð� ��
		if (timesum>timecheck)
		{
			gotoxy(10, 17);
			printf("���ѽð��� �Ѱ���ϴ�!");
			break;
		}
	}
	//���� ���
	gotoxy(10, 18);
	printf("����� ������ %d �� �Դϴ�.", count * 10);

	//ä����� ǥ��
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(27, i + 5);
		printf("%c ", check[i]);
	}
	gotoxy(10, 19);
	printf("�����ϼ̽��ϴ�.");
	system("PAUSE");
}

void all_time() {
	time_t fi, si;
	int x[11], y[11], dap[11];
	int count, i, timesum, timecheck;
	char check[11];
	system("cls");
	gotoxy(5, 5);
	printf("����Ǭ �� �ð� ǥ��");
	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
	}

	//���� ���
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("���� %2d>  %d*%d=? \n", i, x[i], y[i]);
	}
	count = 0;
	//���� Ǯ�� ���� ��� ������ Ʋ�ȴٰ�(X) ������
	for (i = 1; i <= 10; i++)
		check[i] = 'X';
	//���� �ð� ����
	time(&fi);
	//������� �� �Է�
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(24, i + 5);
		scanf("%d", &dap[i]);
		if (dap[i] == x[i] * y[i])
		{
			count = count + 1;
			check[i] = 'O';
		}
		else
			check[i] = 'X';
	}
		time(&si);
		timesum = si - fi;
		//���� ���
		gotoxy(10, 18);
		printf("����� ������ %d �� �Դϴ�.", count * 10);
		gotoxy(10, 19);
		printf("������ Ǫ�µ� �ɸ� �� �ð��� %2d�� �Դϴ�.", timesum);

		//ä����� ǥ��
		for (i = 1; i <= 10; i = i + 1)
		{
			gotoxy(27, i + 5);
			printf("%c ", check[i]);
		}
		gotoxy(10, 20);
		printf("�����ϼ̽��ϴ�.");
		system("PAUSE");
}
void rate() {
	int x[11], y[11], dap[11], cnt_x[11] = { 0 };
	float dan[11]={ 0.0 };
	int count, i;
	char check[11];
	system("cls");
	gotoxy(5, 5);
	printf("�� ���� ������ ǥ��");
	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
		cnt_x[x[i]]++;
	}
	//���� ���
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("���� %2d>  %d*%d=? \n", i, x[i], y[i]);
	}
	count = 0;
	for (i = 1; i <= 10; i++)
		check[i] = 'X';
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(24, i + 5);
		scanf("%d", &dap[i]);
		if (dap[i] == x[i] * y[i])
		{
			count = count + 1;
			check[i] = 'O';
			dan[x[i]]++;
		}
		else
			check[i] = 'X';
	}
	//���� ���
	gotoxy(10, 18);
	printf("����� ������ %d �� �Դϴ�.", count * 10);

	//ä����� ǥ��
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(27, i + 5);
		printf("%c ", check[i]);
	}
	gotoxy(10, 20);
	printf("�������� ������ �ƹ�Ű�� ��������.");
	getch();
	system("cls");

	for (int i = 1; i <= 9; i++)
		dan[i] = dan[i] / cnt_x[i] * 100;

	for(i=1;i<=9;i++){
		gotoxy(2, i);
		printf("%2d��:����������",i);
		gotoxy(19, i);
		if (cnt_x[i] > 0)
			printf("%d:������  %.0f", cnt_x[i],dan[i]);
		else printf("%d", 0);
	}
	gotoxy(10, 20);
	printf("�����ϼ̽��ϴ�.");
	system("PAUSE");
}
void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void press_key(void) {
	printf("\n\n�ƹ�Ű�� ������ ���� �޴���...");
	getch();
}