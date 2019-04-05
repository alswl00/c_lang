#include <stdio.h>
main() {
	int a = 2, b = 3, c, d;
	c = a || b;
	d = a | b;
	printf("%d\n", c + d);
}