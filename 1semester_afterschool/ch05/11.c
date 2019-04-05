#include <stdio.h>

int main(void) {
	int a = -1, i;
	/*printf("%d의 이진수: ", a);
	printf("%d", (a >> 7) & 1);
	printf("%d", (a >> 6) & 1);
	printf("%d", (a >> 5) & 1);
	printf("%d", (a >> 4) & 1);
	printf("%d", (a >> 3) & 1);
	printf("%d", (a >> 2) & 1);
	printf("%d", (a >> 1) & 1);
	printf("%d", (a >> 0) & 1);
	printf("\n");*/

	printf("%d의 이진수 : ", a);
	for (i = 31; i >= 0; i--) {
		printf("%d", (a >> i) & 1);
	}

	return 0;
}