#include <stdio.h>
void main(void) {
	int a;
	for (a = 1; a <= 20; a++)
		if (!(a % 3))
			printf("%3d", a);
}