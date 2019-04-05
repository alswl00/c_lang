#include <stdio.h>
void main() {
	static int a[5][5];
	int k, m, n = 4;
	a[0][0] = 1;
	for (k = 1; k <= n; k++) {
		a[k][0] = 1;
		for (m = 1; m <= n; m ++ ) 
			a[k][m] = a[k - 1][m - 1] + a[k - 1][m];
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) 
			printf("%d ", a[i][j]);
		printf("\n");
	}
}