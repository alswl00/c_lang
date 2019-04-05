#include <stdio.h>
void main(void) {
	int a, b;
	for (a = 0, b = 1; b <= 10;) {
		b += 2;
		a += b;
	}
	printf("%d\n", a);
}