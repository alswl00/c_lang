#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int return_int(float);
float return_float(float);
int main() {
	float num, num_f;
	int num_i;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f", &num);
	num_i = return_int(num);
	num_f = return_float(num,num_i);
	printf("%f�� ���� : %d\t�Ǽ� : %f\n", num, num_i, num_f);
	return 0;
}

int return_int(float num) {
	return (int)num;
}

float return_float(float num) {
	return num - (int)num;
}