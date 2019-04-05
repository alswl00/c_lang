#include <stdio.h>

int main(void) {
	int m = 5; int n = 7;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i<= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 || j == 1 || i == 5 || j == 7) {
				printf("*"); 
			}
			else { printf(" "); 
			}
		}
		printf("\n");
		}
	printf("\n");

	n = 5;
	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j > 0; j--) {
			printf(" ");
		}
		for (int j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	/*for (int i = 1; i <= n;i++) {                    *
		for (int j = n - i; j > 0; j--) {            *   *
			printf(" ");                           *       *
		}                                        *           *
		for (int j = 1; j <= i * 2 - 1; j++) {  *   *   *  *   *
			
			printf("*");q1	
		}
		printf("\n");*/
	}