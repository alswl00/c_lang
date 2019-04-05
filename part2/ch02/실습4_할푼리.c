//p.89 실습 4번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b, c, x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	float z = (float)x / y;
	a = 10 * z;
	b = 100 * z - 10*a;
	c = 1000 * z - 100*a-10*b;

	printf("%d할%d푼%d리", a, b, c);

	/*int k = 0.375;
	int tmp = k * 1000;//375
	int a = tmp - k / 10;*/

}