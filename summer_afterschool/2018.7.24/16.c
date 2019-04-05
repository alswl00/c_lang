#include <stdio.h>

int main(void) {
	for (int i = 1, count=0; i <= 100; i++) {
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7== 0) continue;
		printf("%d ", i);
		count++;
		if (count % 10 == 0) printf("\n");
	}

	return 0;
}