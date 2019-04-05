#include <stdio.h>

int main(void) {
	int a[4] = { 2,3,4,5 };
	int b[4] = { 2,3,3,5 };
	int re;
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		if (a[i] == b[i])
			re = 1;
		else {
			re = 0;
			break;
		}
	}
		printf("%d\n", re);
	return 0;
}