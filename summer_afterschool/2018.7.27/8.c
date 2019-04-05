#include <stdio.h>

int main(void) {
	int a[4][3] = { {46,79,78},{35,57,28},{43,68,76},{56,78,98} };
	int b[4][3] = { {78,35,99},{85,82,34},{58,69,29},{34,59,35} };
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d, %4d\t", a[i][j] + b[i][j], a[i][j] - b[i][j]);
	}
		printf("\n");
	}

	return 0;
}