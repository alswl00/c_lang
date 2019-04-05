//p.104 예 2-30

#include <stdio.h>
void main() {
	int a = 3, x;

	float y, z;
	x = a / 2;
	y = a / 2;

	z = (float)a / 2;
	printf("x=%2d\ny=%f\nz=%f\n", x, y, z);

	int c, d;
	int b = c = d = 3;
	printf("%d %d %d\n", b, c, d);	//초기화를 안함
}