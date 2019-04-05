#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main(void) {
	//char *text = "color 1e";
	//system(text);
	/*printf("아무키나 누르면\n");
	printf("이전 색으로 돌아갑니다.\n");
	getch();
	system("color 07");*/

	char text[9];
	char t[3];
	printf("텍스트화면의 색상변경\n\n");
	system("help color");
	printf("입력후 enter>>");
	scanf("%s", t);
	sprintf(text, "color %s", t);
	system(text);

	return 0;
}