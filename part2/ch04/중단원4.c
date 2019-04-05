#include <stdio.h>
void main() {
	int m, n, k = 0;
	for (m = 1; m <= 3; m++)
		for (n = 1; n <= 3; n++)
			if (m + n <= 3)
				k = k + m + n;
	printf("k= %d\n", k);
}