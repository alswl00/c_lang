#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float change(float a) {
	float cm;
	cm = a *2.54;
	return cm;
}
int main(void) {
	float inch;
	scanf("%f", &inch);
	float cm = change(inch);
	printf("%f\n", cm);

	return 0;
}