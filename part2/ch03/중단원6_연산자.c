#include <stdio.h>
main() {
	int a = 5, b = 3, c;
	c = a * (a - b) - (a < b) * 2;
	printf("%d\n", c);
}