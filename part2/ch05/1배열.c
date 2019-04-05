#include <stdio.h>
void main() {
	/*int a[5] = { 1,2,3,4,5 };
	printf("%3d %3d %3d %3d ", a[0], a[1], a[2], a[3]);
	printf("\n");*/
	double a[] = { 1,2,3,4,5 };
	for (int i = 0; i < sizeof(a)/sizeof(double); i++) printf("%f ", a[i]);
	printf("\n");
}