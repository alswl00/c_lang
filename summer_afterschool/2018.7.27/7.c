#include <stdio.h>

int main(void) {
	int a[4][4] = { {78,48,78,98},{99,92,83,29},{29,64,83,89 }, { 34,78,92,56 } };
	int width=0, length=0;
	
	printf("가로 합 :	세로 합 :	\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			width += a[i][j];
			length += a[j][i];
		}
		printf("\t  %d\t\t%d\n", width, length);
	}
	printf("\n총합 : %d\n", width + length);

	return 0;
}