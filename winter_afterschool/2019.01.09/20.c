#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main(void) {
	printf("ȭ��ǥ Ű�� ���� ���ڸ� ����,�����ϼ���!!\n");
	system("cls");
	char key;
	int p = 1000;
	int i = 10;
	printf("%d", p);
	do {
		key = getch();
		system("cls");
		switch (key) {
		case 72:
			p += i;
			break;
		case 75:
			if (i <= 0) break;
			i -= 10;
			break;

		case 77:
			i += 10;
			break;

		case 80:
			p -= i;
			break;

		default:
			break;
		}
		printf("%d", p);
	} while (key != 27);
	printf("\n");
	return 0;
}