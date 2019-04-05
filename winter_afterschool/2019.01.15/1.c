#include <stdio.h>
void print_matrix(int m[][3], int row_size, int col_size);
int main() {
	int ma[][3] = { 3,8,6,4,1,7,5,2,9 };
	print_matrix(ma, 3, 3);
	return 0;
}
void print_matrix(int m[][3], int row_size, int col_size) {
	int i, j;
	for (i = 0; i < row_size; i++) {
		for (j = 0; j < col_size; j++)
			printf("%2d ", m[i][j]);
		printf("\n");
	}
}