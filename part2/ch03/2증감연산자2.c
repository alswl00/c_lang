//p.98 ¿¹ 2-23

#include <stdio.h>
int main() {
	int a, b, c = 0;
	a = ++c;
	printf("%d\n", c);
	b = c++;
	printf("%d\n", c);
	printf("%d %d %d\n", a, b, ++c);
	printf("\n");

	a = 2; b = 3; c = 4;
	int d = a++ + --b - c++;
	printf("a+b+c+d=%d\n", a + b + c + d);

	return 0;
}