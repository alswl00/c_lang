#include <stdio.h>

int main(void) {
	int from[] = { 1, 2, 3, 4, 5 };
	int to[4];
	for (int i = 0; i < sizeof(from)/sizeof(int)-1; i++) {
		to[i] = from[i];
		printf("%d\n", to[i]);
	}
	return 0;
}