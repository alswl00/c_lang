#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void recursion(int);
int main(void) {
	int n;
	scanf("%d", &n);
	recursion(n);
	printf("\n");

	return 0;
}

void recursion(int n) {
	int q, r;
	char c;
	if (n < 16)
		return n;
	else {
		q = n / 16;
		printf("%d", q);
		r = n % 16;
		if (r >= 10) {
			switch (r) {
			case 10: c = 'A';
			case 11: c = 'B';
			case 12: c = 'C';
			case 13: c = 'D';
			case 14: c = 'E';
			case 15: c = 'F';
			}
			printf("%c", c);
		}
		else {
			c = r;
			printf("%d", c);
		}
	}

}