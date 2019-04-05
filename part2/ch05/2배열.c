#include <stdio.h>
int main() {
	int a[7] = { 1,2,3,4,5,6 };
	int i;
	for (i = 0; i < 7; i++) {
		printf("%2d", a[i]);
	}
	printf("\n");
	return 0;
}