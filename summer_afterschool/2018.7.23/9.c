#include <stdio.h>
int main(void) {
	float v, s;
	v = (4.0 / 3.0)*3.14*7.58*7.58*7.58;
	s = 4.0*3.14*7.58*7.58;
	printf("구 체적 : %f\n구표면적 : %f\n", v, s);

	return 0;
}