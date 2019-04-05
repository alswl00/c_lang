#include <stdio.h>

int main(void) {
	int a = 1;
	int *b = &a;

	printf("%d\n", sizeof(b));

	return 0;
}