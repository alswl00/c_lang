#include <stdio.h>
void print_matrix(int m[][3], int row_size, int col_size);
//void add_matrix(int a[][3],int b[][3], int sum[][3], int row);
//void sub_matrix(int a[][3], int b[][3], int m[][3], int row);
void mul_matrix(int a[][3], int b[][3], int ma[][3], int row);
void rotation_left(int m[][3]);
void rotation_rignt(int m[][3]);
void symmetric(int m[][3],int s[][3]);
int main() {
	int a[][3] = { 1,2,3,4,5,6,7,8,9 };
	//int b[][3] = { 1,4,9,6,5,8,2,3,7 };
	int sum[3][3];
	int m[3][3];
	int ma[3][3];
	int ro[3][3];
	int sy[3][3];
	print_matrix(a, 3, 3);
	printf("\n");
	//print_matrix(b, 3, 3);
	//printf("\n");
	/*add_matrix(a, b, sum, 3);
	printf("\n");
	sub_matrix(a, b, m, 3);*/
	//mul_matrix(a, b, ma, 3);
	//rotation_left(a);
	//printf("\n");
	//rotation_rignt(a);
	symmetric(a, sy);
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
void add_matrix(int a[][3], int b[][3], int sum[][3], int row) {
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < row; j++)
			sum[i][j] = a[i][j] + b[i][j];
	print_matrix(sum,3,3);
}
void sub_matrix(int a[][3], int b[][3], int m[][3], int row) {
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < row; j++)
			m[i][j] = a[i][j] - b[i][j];
	print_matrix(m, 3, 3);
}
void mul_matrix(int a[][3], int b[][3], int ma[][3], int row) {
	int r, c, k;
	for(r=0;r<row;r++)
		for (c = 0; c < row; c++) {
			ma[r][c] = 0;
			for (k = 0; k < row; k++)
				ma[r][c] += a[r][k] * b[k][c];
		}
	print_matrix(ma, 3, 3);
}
void rotation_left(int m[][3]) {
	int i, j;
	int temp[3][3];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			temp[2 - j][i] = m[i][j];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			m[i][j] = temp[i][j];
	print_matrix(m, 3, 3);
}
void rotation_rignt(int m[][3]) {
	int i, j;
	int temp[3][3];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			temp[j][2-i] = m[i][j];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			m[i][j] = temp[i][j];
	print_matrix(m, 3, 3);
}
void symmetric(int m[][3],int s[][3]) {
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			s[i][j] = m[j][i];
	print_matrix(s, 3, 3);

}