#include <stdio.h>
#include "c.h"

void print_value(int x, int y) {
	printf("�� ������ : %d,%d\n", x, y);
}
void exchange(int *ap, int *bp) {
	int temp;

	temp = *ap;
	*ap = *bp;
	*bp = temp;
}