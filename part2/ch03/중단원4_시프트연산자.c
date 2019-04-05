#include <stdio.h>
main() {
	int a = 10, b;
	b = a << 2;
	a = a >> 1;
	printf("%d\n", a + b);
}