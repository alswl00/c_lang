#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ip;
	double *dp;

	ip = (int *)malloc(sizeof(int));
	dp = (double *)malloc(sizeof(double));

	if (ip == 0)
		printf("�޸𸮰� �����մϴ�\n");
	else
		*ip = 10;

	if (dp == 0)
		printf("�޸𸮰� �����մϴ�\n");
	else
		*dp = 3.4;

	printf("���������� ���:%d\n", *ip);
	printf("�Ǽ������� ���:%lf\n", *dp);

	return 0;
}