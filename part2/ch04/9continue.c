#include <stdio.h>
int main() {
	int a = 0;
	for (a = 1; a <= 10; a++) {
		if (a % 5 == 0) continue;
		printf("%3d", a);
	}
	printf("\n");
	return 0;
}