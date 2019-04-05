#pragma warning(disable:4996)
#include <stdio.h>
void draw_check(int c, int r);
int main(void) {
	int row, column;
	printf("바둑판 그리기\n");
	printf("가로와 세로의 길이 입력>>");
	scanf("%d %d", &column, &row);
	draw_check(column, row);
	return 0;
}

void draw_check(int c, int r) {
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[12];
	for (i = 1; i < 12; i++)
		b[i] = 0xa0 + i;
	printf("%c%c", a, b[3]);

	for (i = 0; i < c - 1; i++)
		printf("%c%c", a, b[8]);
	printf("%c%c", a, b[4]);
	printf("\n");
	for (i = 0; i < r - 1; i++) {
		printf("%c%c", a, b[7]);
		for (j = 0; j < c - 1; j++)
			printf("%c%c", a, b[11]);
		printf("%c%c", a, b[9]);
		printf("\n");
	}
	printf("%c%c", a, b[6]);
	for (i = 0; i < c - 1; i++)
		printf("%c%c", a, b[10]);
	printf("%c%c", a, b[5]);
	printf("\n");

}