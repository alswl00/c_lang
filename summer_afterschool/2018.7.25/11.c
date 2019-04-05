#include <stdio.h>

int recursion(int);
int main(void) {
	int x, y, mult;
	for (int i = 0; i <= 10; i++) {
		mult = recursion(i);
		printf("%d\n", mult);
	}
	return 0;
}

int recursion(int y) {
	int mult;
	if (y == 0)
		return 1;
	else
		mult = 6 * recursion(y-1);
	return mult;
}