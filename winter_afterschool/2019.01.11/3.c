#pragma warning(disable:4996)
#include <stdio.h>
void draw_rectangle(int, int);
int main(void) {
	int row, column;
	printf("���簢�� �׸���\n");
	printf("���ο� ������ ���� �Է�>>");
	scanf("%d %d", &column, &row);
	draw_rectangle(column, row);
	return 0;
}

void draw_rectangle(int c, int r) {
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[7];
	for (i = 1; i < 7; i++)
		b[i] = 0xa0 + i;
	printf("%c%c", a, b[3]);

	for (i = 0; i < c; i++)
		printf("%c%c", a, b[1]);
	printf("%c%c", a, b[4]);
	printf("\n");
	for (i = 0; i < r; i++) {
		printf("%c%c", a, b[2]);
		for (j = 0; j < c; j++)
			printf("  ");
		printf("%c%c", a, b[2]);
		printf("\n");
	}
	printf("%c%c", a, b[6]);
	for (i = 0; i < c; i++)
		printf("%c%c", a, b[1]);
	printf("%c%c", a, b[5]);
	printf("\n");
}