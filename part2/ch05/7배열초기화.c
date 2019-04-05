#include <stdio.h>

int main() {
	char c[2][3] = { "ab" };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (c[i][j]==NULL)
				printf("*\n");
			else printf("%c\n", c[i][j]);
		}
	}

	return 0;
}