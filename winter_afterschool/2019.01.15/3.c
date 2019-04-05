#include <stdio.h>
void mul_matrix(int a[][5], int b[][4], int m[][5], int a_r, int b_r);
void print_matrix(int m[][3], int row_size, int col_size);
int main(void) {
	int a[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int b[5][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int ma[5][5];
	mul_matrix(a, b, ma,3,5);


	return 0;
}
void mul_matrix(int a[][5], int b[][4], int m[][5], int a_r, int b_r) {
	int i, j,k;
	for(i=0;i<a_r;i++)
		for (j = 0; j < b_r-1; j++) {
			m[i][j] = 0;
			for (k = 0; k < b_r; k++)
				m[i][j] += a[i][k] * b[k][j];
		}
	print_matrix(m, 3,4);
}
void print_matrix(int m[][3], int row_size, int col_size) {
	int i, j;
	for (i = 0; i < row_size; i++) {
		for (j = 0; j < col_size; j++)
			printf("%3d ", m[i][j]);
		printf("\n");
	}
}