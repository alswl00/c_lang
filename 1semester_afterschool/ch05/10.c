#include <stdio.h>

int main(void)
{
	int x = 16391;
	int a = 20, b = 7;

	printf("%6d --> %08x\n", x, x);
	printf("x >> 1 --> %d, %08x\n", x >> 1, x >> 1);
	printf("x >> 2 --> %d, %08x\n", x >> 2, x >> 2);
	printf("x >> 2 --> %d, %08x\n", x >> 3, x >> 3);
	printf("x << 2 --> %d, %08x\n", x << 2, x << 2);
	printf("x << 2 --> %d, %08x\n", x << 3, x << 3);
	printf("a*b=%d\n", (a << 2) + (a << 1) + a);

	b = 4;
	printf("a/b=%d\n", a >> 2);


	return 0;

}