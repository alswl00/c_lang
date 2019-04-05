#include <stdio.h>
int main(void) {
	int point1 = 95;
	int point2 = 84;
	int total = point1 + point2;

	printf("중간고사 : %d\n기말고사 : %d\n합 : %d\n", point1, point2, total);
	printf("평균 : %d\t", total / 2);
	printf("%f\n", total / 2.0);
	
	return 0;
}