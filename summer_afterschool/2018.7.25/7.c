#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void area(float);
void circumference(float);
int main(void) {
	float r;
	scanf("%f", &r);
	area(r);
	circumference(r);

	return 0;
}

void area(float r) {
	float a = (3.14)*r*r;
	printf("���� ���� : %f\n", a);
}

void circumference(float r) {
	float c = (3.14) * 2 * r;
	printf("���� �ѷ� : %f\n", c);
}