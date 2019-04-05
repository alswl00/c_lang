#include <stdio.h>

void main() {
	int a, sum=0;
	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (a = 0; a < 10; a++) {
		if (num[a] % 2 == 1)
			sum += num[a];
	}
	printf("%d\n", sum);
}