#include <stdio.h>
void main() {
	int a = 3;
	int b = a++ + 5;
	printf("a=%d b=%d\n", a, b);
	a = 3;
	b = ++a + 5;
	printf("a=%d b=%d\n", a, b);
}