#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float distance(float, float, float, float);
int main(void) {
	float x1, x2, y1, y2;
	printf("ÁÂÇ¥1 : ");
	scanf("%f %f", &x1, &y1);
	printf("ÁÂÇ¥2 : ");
	scanf("%f %f", &x2, &y2);
	float d = distance(x1, x2, y1, y2);
	printf("°Å¸® : %f\n", d);

	return 0;
}

float distance(float x1, float x2, float y1, float y2) {
	float d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	return d;
}