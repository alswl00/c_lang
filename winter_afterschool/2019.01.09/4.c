#include <stdio.h>
#include <math.h>
int main(void) {
	double num1 = 2.0;
	double num2 = 4.0;
	double num3 = 8.0;
	double num4 = 9.0;
	double num5 = 16.0;
	double mant;
	int expc;
	printf("log(%.lf)  =%f\n", num4, log(num4));
	printf("log10(%.lf) = %f\n", num4, log10(num4));
	printf("%.lf^%.lf =%f\n", num1, num2, pow(num1, num2));
	printf("square root(%.lf)  =%f\n", num5, sqrt(num5));
	return 0;
}