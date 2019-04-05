#include <stdio.h>
#include <stdlib.h>
// <time.h>

void main() {
	int m, num, cnt;

	srand((unsigned)time(NULL));
	cnt = 0;
	for (m = 1; m <= 10; m++) {
		num = rand();// % 5;
		printf("%3d", num);
		cnt++;
		//if (cnt % 4 == 0)
			printf("\n");
	}
	printf("\n");
}