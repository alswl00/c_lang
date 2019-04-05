#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char buf[40];
	int v = 25;
	double x = 3.14;
	sprintf(buf, "³ªÀÌ=%3d, x=%5.2f\n", v, x);
	printf("v=%3d, x=%5.2f\n", v, x);
	puts(buf);
	return 0;
}