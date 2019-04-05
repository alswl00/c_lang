#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int return_int(float);
float return_float(float);
int main() {
	float num, num_f;
	int num_i;
	printf("실수를 입력하시오 : ");
	scanf("%f", &num);
	num_i = return_int(num);
	num_f = return_float(num,num_i);
	printf("%f의 정수 : %d\t실수 : %f\n", num, num_i, num_f);
	return 0;
}

int return_int(float num) {
	return (int)num;
}

float return_float(float num) {
	return num - (int)num;
}