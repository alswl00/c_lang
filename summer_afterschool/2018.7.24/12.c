#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float x, y, t;
	scanf("%f %f", &x, &y);
	if (x > 0) {
		if (y > 0) t = x + y;
		else t = x - y;
	}
	else {
		if (y > 0) t = -x + y;
		else t = -x - y;
	}

	printf("%f\n", t);

	return 0;
}