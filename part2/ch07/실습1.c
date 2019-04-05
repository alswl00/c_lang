#include <stdio.h>
int main(void) {
	int a[]={ 10, 20, 30, 40, 50 };
	int sum = 0, *b;
	b = a;
	do {
		sum += *b++;
	} while (b <= &a[4]);
	printf("10, 20, 30, 40, 50ÀÇ ÇÕÀº %d\n", sum);
}