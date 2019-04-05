#include <stdio.h>
main() {
	int a, b, c, s;

	a = 25;
	b = a / 3;
	c = a % 3;
	s = (b + c) / 5;
	printf("%d\n", s);
}