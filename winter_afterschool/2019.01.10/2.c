#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
void text_color(char *p, int n);
int main(void) {
	int num;
	char text[20];
	char color[9];
	printf("�Է��� ������ ���󺯰�\n\n������ �Է��ϰ� enter>>");
	scanf("%s", text);
	system("cls");
	printf("1:�Ķ���  2:�ʷϻ�  3:����\n4:������  5:���ֻ�  6:�����\n7:���  8:ȸ��  9:���� �Ķ���\n0:����\n\n");
	printf("�����ȣ �Է� �� enter>>");
	scanf("%d", &num);
	text_color(text, num);
	printf("�Է� ����:%s", text);
	return 0;
}

void text_color(char *p, int n) {
	sprintf(p, "color 0%d", n);
	system(p);
}