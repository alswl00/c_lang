#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	float v, s, r;
	scanf("%f", &r);
	v = (4.0 / 3.0)*3.14*r*r*r;
	s = 4.0*3.14*r*r;
	printf("구 체적 : %f\n구표면적 : %f\n", v, s);

	return 0;
}