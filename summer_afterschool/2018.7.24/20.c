#include <stdio.h>

int main(void) {
	int x, y;
	for (x = 5; x <= 10; x += 0.5) {
		y = 3 * x * 3 * x * 3 * x + 2 * x * 2 * x + x + 5;
		printf("x = %d\ty = %d\n", x, y);
	}
	return 0;
}