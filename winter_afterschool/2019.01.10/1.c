#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main(void) {
	//char *text = "color 1e";
	//system(text);
	/*printf("�ƹ�Ű�� ������\n");
	printf("���� ������ ���ư��ϴ�.\n");
	getch();
	system("color 07");*/

	char text[9];
	char t[3];
	printf("�ؽ�Ʈȭ���� ���󺯰�\n\n");
	system("help color");
	printf("�Է��� enter>>");
	scanf("%s", t);
	sprintf(text, "color %s", t);
	system(text);

	return 0;
}