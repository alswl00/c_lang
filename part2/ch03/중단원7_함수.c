#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
const c = 2;
float func(float x) {
	return x / c;
}
void main() {
	float a;// int a;
	int b;
	scanf("%f", &a);
	b = func(a);
	printf("%f %d", a, b);
}