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
	printf("구구단 학습 프로그램");
	i++;
	gotoxy(5, i++);
	printf("1.구구단 보기");
	gotoxy(5, i++);
	printf("2.구구단 문제풀기");
	gotoxy(5, i++);
	printf("3.종료");
	gotoxy(5, i++);
	printf("메뉴번호 입력>>");
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
	printf("구구단 보기\n\n");
	i++;
	gotoxy(5, i++);
	printf("1.  원하는 단만 보기\n");
	gotoxy(5, i++);
	printf("2.  전체 보기\n");
	gotoxy(5, i++);
	printf("3.  메인 메뉴로 이동\n\n");
	gotoxy(5, i++);
	printf("메뉴번호 입력>>");
	sel = getch() - 48;
	return sel;

}

int sub_menu_display2(void) {
	int sel, i = 5;
	system("cls");
	gotoxy(5, i++);
	printf("구구단 문제풀기\n\n");
	i++;
	gotoxy(5, i++);
	printf("1.  틀린문제 다시풀기\n");
	gotoxy(5, i++);
	printf("2.  제한시간 내에 풀기\n");
	gotoxy(5, i++);
	printf("3.  문제 푼 총 시간 표시\n");
	gotoxy(5, i++);
	printf("4.  각 단의 성공률 표시\n");
	gotoxy(5, i++);
	printf("5.  메인 메뉴로 이동\n\n");
	gotoxy(5, i++);
	printf("메뉴번호 입력>>");
	gotoxy(5, i++);
	sel = getch() - 48;
	return sel;
}

void want_dis(void) {
	int num, i = 5;
	system("cls");
	gotoxy(5, i++);
	printf("원하는 단만 보기\n");
	i++;
	gotoxy(5, i++);
	printf("원하는 단 입력>>");
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
	printf("전체 보기\n");
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
		printf("틀린문제 다시풀기");
		if (cnt == 10) break;
		for (int i = 1; i <= 10; i++) {
			gotoxy(10, i + 6);
			if (check[i] == 'X')
				printf("문제%2d>%d*%d=?", i, a[i], b[i]);
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
			printf("%d점입니다.\n", cnt * 10);
			getch();
			system("cls");
		}
		j++;
	}
	gotoxy(10, 18);
	printf("수고하셨습니다");
	press_key();
}
void time_q(void)
{
	//  int min;
	time_t fi, si;
	// 피승수 x, 승수 y, 사용자 입력값dap,각
	//
	int x[11], y[11], dap[11];
	// 맞은 개수누적 count, 순환 변수 i
	// 총 시간 저장 timesum, 제한시간timecheck
	int count, i, timesum, timecheck;
	// 채점결과 저장
	char check[11];
	system("cls");
	gotoxy(10, 2);
	printf("사용자가 지정한 제한시간 내에 문제풀기");
	gotoxy(10, 3);
	printf("제한시간(초)을 입력하세요");
	scanf("%d", &timecheck);

	//문제 생성(출제)

	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
	}

	//문제 출력
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("문제 %2d>  %d*%d=? \n", i, x[i], y[i]);
	}
	count = 0;
	//문제 풀기 전에 모든 문제를 틀렸다고(X) 가정함
	for (i = 1; i <= 10; i++)
		check[i] = 'X';
	//시작 시간 저장
	time(&fi);
	//사용자의 값 입력
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
		printf(" 경과시간 : %2d 초 ", timesum);
		//경과시간 비교
		if (timesum>timecheck)
		{
			gotoxy(10, 17);
			printf("제한시간을 넘겼습니다!");
			break;
		}
	}
	//점수 출력
	gotoxy(10, 18);
	printf("당신의 점수는 %d 점 입니다.", count * 10);

	//채점결과 표시
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(27, i + 5);
		printf("%c ", check[i]);
	}
	gotoxy(10, 19);
	printf("수고하셨습니다.");
	system("PAUSE");
}

void all_time() {
	time_t fi, si;
	int x[11], y[11], dap[11];
	int count, i, timesum, timecheck;
	char check[11];
	system("cls");
	gotoxy(5, 5);
	printf("문제푼 총 시간 표시");
	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
	}

	//문제 출력
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("문제 %2d>  %d*%d=? \n", i, x[i], y[i]);
	}
	count = 0;
	//문제 풀기 전에 모든 문제를 틀렸다고(X) 가정함
	for (i = 1; i <= 10; i++)
		check[i] = 'X';
	//시작 시간 저장
	time(&fi);
	//사용자의 값 입력
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
		//점수 출력
		gotoxy(10, 18);
		printf("당신의 점수는 %d 점 입니다.", count * 10);
		gotoxy(10, 19);
		printf("문제를 푸는데 걸린 총 시간은 %2d초 입니다.", timesum);

		//채점결과 표시
		for (i = 1; i <= 10; i = i + 1)
		{
			gotoxy(27, i + 5);
			printf("%c ", check[i]);
		}
		gotoxy(10, 20);
		printf("수고하셨습니다.");
		system("PAUSE");
}
void rate() {
	int x[11], y[11], dap[11], cnt_x[11] = { 0 };
	float dan[11]={ 0.0 };
	int count, i;
	char check[11];
	system("cls");
	gotoxy(5, 5);
	printf("각 단의 성공률 표시");
	for (i = 1; i <= 10; i = i + 1)
	{
		x[i] = rand() % 9 + 1;
		y[i] = rand() % 9 + 1;
		cnt_x[x[i]]++;
	}
	//문제 출력
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(10, i + 5);
		printf("문제 %2d>  %d*%d=? \n", i, x[i], y[i]);
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
	//점수 출력
	gotoxy(10, 18);
	printf("당신의 점수는 %d 점 입니다.", count * 10);

	//채점결과 표시
	for (i = 1; i <= 10; i = i + 1)
	{
		gotoxy(27, i + 5);
		printf("%c ", check[i]);
	}
	gotoxy(10, 20);
	printf("성공률을 보려면 아무키나 누르세요.");
	getch();
	system("cls");

	for (int i = 1; i <= 9; i++)
		dan[i] = dan[i] / cnt_x[i] * 100;

	for(i=1;i<=9;i++){
		gotoxy(2, i);
		printf("%2d단:출제문제수",i);
		gotoxy(19, i);
		if (cnt_x[i] > 0)
			printf("%d:성공률  %.0f", cnt_x[i],dan[i]);
		else printf("%d", 0);
	}
	gotoxy(10, 20);
	printf("수고하셨습니다.");
	system("PAUSE");
}
void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void press_key(void) {
	printf("\n\n아무키나 누르면 메인 메뉴로...");
	getch();
}