#include <stdio.h>
int main() {
	int i, sum = 0;
	for (i = 1; i <= 5; i++) {
		if (sum >= 10) continue;
		sum = sum + i;
		
	}
	printf("i=%d, sum=%d\n", i, sum);
	return 0;
}