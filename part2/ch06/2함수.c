#include <stdio.h>
int add(int x, int y);
void main() {
	add(1, 2);
	add(3, 4);
	add(5, 6);
	add(7, 8);
}

int add(int x, int y) {
	int z;
	z = x + y;
	printf("%2d\n", z);
	return 0;
}