#include <stdio.h>
void draw_square();
int main() {
	draw_square();
	return 0;
}

void draw_square() {
	char a = 0xa6;
	char b[4] = { 0xa3,0xa4,0xa6,0xa5 };
	for (int j = 1; j <= 5; j++)
		for (int i = 0; i < 2; i++)
			printf("%c%c", a, b[i]);
	printf("\n");
	for (int j = 1; j <= 5; j++)
		for (int i = 2; i < 4; i++)
			printf("%c%c", a, b[i]);
}