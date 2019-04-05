#include <stdio.h>
int addall(int k, int e, int m) {
	int all;
	all = k + e + m;
	return all;
}

void main() {
	int a, b, c;
	int sum;
	a = 10, b = 20, c = 10;
	sum = addall(a, b, c);
	printf("%2d\n", sum);
}