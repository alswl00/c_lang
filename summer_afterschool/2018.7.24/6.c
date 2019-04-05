#include <stdio.h>

int main(void) {
	int a[5] = { 18,25,32,44,52 };

	for (int i = 0; i < 5; i++) 
		printf("%dÆò => %fm2\n", a[i], a[i] * 3.305785);
	return 0;
}