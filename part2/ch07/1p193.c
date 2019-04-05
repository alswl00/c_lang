#include <stdio.h>

void main(void) {
	int i = 5, j = 10;
	int *p = &i, *q = &j;
	printf(" (1) I = %d, j = %d \n", i, j);
	printf(" (2) &i = %p, &j = %p \n", &i, &j);
	printf(" (3) p = %p, q = %p \n", p, q);
	printf(" (4) *p = %d, *q = %d \n", *p, *q);

}