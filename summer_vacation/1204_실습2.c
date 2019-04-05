#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pp(int n);
void main() {
	int num;
	scanf("%d", &num);
	printf("%2d\n", pp(num));
}
int pp(int n) {
	int rem;
	int sum = 0;
	while (n != 0) {
		rem = n % 10;
		sum += rem;
		n = n / 10;
	}
	
	return sum;
}