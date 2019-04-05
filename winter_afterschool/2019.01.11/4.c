#include <stdio.h>
void draw_basic_check_pattern(void);
int main(void) {
	draw_basic_check_pattern();

	return 0;
}

void draw_basic_check_pattern(void) {
	unsigned char a = 0xa6;
	unsigned char c[9] = { 0xa3,0xa8,0xa4,0xa7,0xab,0xa9,0xa6,0xaa,0xa5 };
	for (int i = 0; i < 9; i++) {
		printf("%c%c", a, c[i]);
		if ((i + 1) % 3 == 0) printf("\n");
	}
}