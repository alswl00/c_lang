#include <stdio.h>
#include <math.h>
#define roundoff(x) floor(x+0.5)
int main(void) {
	double i, dnum;
	printf(" x\tceil(x)\tfloor(x) floor(x+0.5)\n");
	for (i = -2; i <= 2; i += 0.4) {
		printf("%4.1f\t%4.1f\t%4.1f\t%4.1f\n", i, ceil(i), floor(i), roundoff(i));
	}
	return 0;
}