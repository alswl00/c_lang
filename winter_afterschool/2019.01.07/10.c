#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char *s1 = "47476";
	char *s2 = "98765432";
	char *s3 = "3456.7634";
	int num1;
	long num2;
	double num3;
	num1 = atoi(s1);
	num2 = atoi(s2);
	num3 = atof(s3);
	printf("���ڿ�:%s, int �� ����: %d\n", s1, num1);
	printf("���ڿ�:%s, long �� ����: %ld\n", s2, num2);
	printf("���ڿ�:%s, double �� ����: %lf\n", s3, num3);
	return 0;
}