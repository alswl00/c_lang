#include <stdio.h>

int main(void) {
	int n = 5; int d = 0;
	char ch = 'A';
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n-i; j++) {
			printf(" ");
		}
		d = i;
		for (int j = 0; j <= 2*i; j++) {
			if (j <i)
				printf("%c", ch + d--);
			else printf("%c", ch + d++);
		}
		printf("\n");
	}
}