#include <stdio.h>
main() {
	int a, b, c = 1;
	for (a = 1; a <= 3; a++)
		for (b = 1; b <= a; b++) {
			c = c + b;
		}
	printf("%d\n", c);
}