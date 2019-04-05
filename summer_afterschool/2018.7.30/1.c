#include <stdio.h>

int main(void) {
	int a = 20;
	int *p = &a;
	printf("%d\n", &a);
	printf("%d\n", p);
	printf("%d\n", *p);
	printf("%d\n", &p);

	return 0;
}