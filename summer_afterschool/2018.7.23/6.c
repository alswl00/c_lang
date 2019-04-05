#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	float i, j;
	scanf("%f %f", &i, &j);
	printf("Че : %f\tЦђБе : %f\n", (float)((int)i + (int)j), ((int)i + (int)j) / 2.0);
}