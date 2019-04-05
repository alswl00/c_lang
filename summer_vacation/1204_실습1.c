#include <stdio.h>
int max(int p, int q);
void main() {
	int m = max(5, 3);
	printf("%d\n", m);
}

int max(int p, int q) {
	int m;
	if (p > q)
		m = p;
	else m = q;
	return m;
}