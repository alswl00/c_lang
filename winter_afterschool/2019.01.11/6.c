#include <stdio.h>
void draw_square();
int main() {
	draw_square();
	return 0;
}

void draw_square() {
	char a = 0xa6;
	char b[4] = { 0xa3,0xa4,0xa6,0xa5 };
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%c%c", a, b[j]);
			if ((j + 1) % 2 == 0) printf("\n");
		}
	}
}