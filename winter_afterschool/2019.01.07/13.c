#include <stdio.h>
int main() {
	char c = 0xa1;
	char d = 0xe2;

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++)
			printf("%c%c", c, d);
		printf("\n");
	}

	return 0;
}