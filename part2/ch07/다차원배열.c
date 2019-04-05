#include<stdio.h>
int main() {
	int a[5] = { 1,2,3,4,5 };
	printf("%d\n", *a);
	printf("%d\n\n", a[0]);


	int b[2][3] = { 10,20,30,40,50,60 };
	printf("%d\n", **b);
	printf("%d\n", *b[0]);
	printf("%d\n\n", b[0][0]);

	int c[2][3][3] = { 0 };
	printf("%d\n", ***c);
	printf("%d\n", **c[0]);
	printf("%d\n", *c[0][0]);
	printf("%d\n", c[0][0][0]);
}