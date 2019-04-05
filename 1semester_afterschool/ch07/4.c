#include <stdio.h>
int main(void) {
	int n = 5;
	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j >= 1; j--) {
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= n - 1; i++) {
		for (int j = n - i; j >= 1; j--) {
			printf(" ");
		}
		printf("*");
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf(" ");
		}
		printf("*");
		printf("\n");

	}

	//for(int )


	printf("\n");

	for (int i = n; i > 0; i--) {
		for (int j = 1; j < i; j++) {
			printf(" ");
		}
		printf("*");

		for (int j = 0; j < (n - i) * 2 - 1; j++) {
			printf(" ");
		}
		if (i != n)
			printf("*\n");
		else printf("\n");
	}
	/*for (int i = n-1; i > 0; i--) {
		for (int j = 1; j <= n-i; j++) {
			printf(" ");
		}
		printf("*");

		for (int j = 0; j > (n - i) * 2-1; j++) {
			printf(" ");
		}
		if (i != n-1) {
			printf("*\n");
		}
		else { printf("\n"); }
	}*/
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		printf("*");
		for (int j = 0; j < (n - i - 1) * 2 - 1; j++) {
			printf(" ");
		}
		if (i != n - 1) { printf("*\n"); }
		else { printf("\n"); }
	}
}