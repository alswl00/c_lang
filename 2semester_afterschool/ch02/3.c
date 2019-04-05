#include <stdio.h>

void exchange(int *, int *);

int main() {
	int x = 10;
	int y = 20;

	printf("x = %d\ny = %d\n", x, y);
	exchange(&x, &y);
	printf("---------------\n");
	printf("x = %d\ny = %d\n", x, y);
	return 0;
}

void exchange(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp; 
}