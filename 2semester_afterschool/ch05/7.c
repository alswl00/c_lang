#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ip;
	double *dp;

	ip = (int *)malloc(sizeof(int));
	dp = (double *)malloc(sizeof(double));

	if (ip == 0)
		printf("메모리가 부족합니다\n");
	else
		*ip = 10;

	if (dp == 0)
		printf("메모리가 부족합니다\n");
	else
		*dp = 3.4;

	printf("정수형으로 사용:%d\n", *ip);
	printf("실수형으로 사용:%lf\n", *dp);

	return 0;
}