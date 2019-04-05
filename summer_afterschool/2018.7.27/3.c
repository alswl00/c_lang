#include <stdio.h>

int main(void) {
	float a[] = { 98.56, 78.62, 78.69, 89.32, 95.29 };
	float sum=0;
	
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		sum += a[i];
		printf("%f  ", a[i]);
	}
	printf("\nÇÕ : %f\nÆò±Õ : %f\n", sum, sum / 5);
	

	return 0;
}