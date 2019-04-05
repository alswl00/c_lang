#include <stdio.h>

int GetFactorial(int num) {
	int sum=1;
	for (int i = 1; i <= num; i++)
		sum *= i;

	return sum;
}

float GetMax(float a, float b, float c) {
	float max;
	max = (a > b) ? a : (b > c) ? b : c;
	
	return max;
}

int main(void) {

	int i_res;
	float f_res;

	i_res = GetFactorial(5);
	printf("5! = %d\n", i_res);

	f_res = GetMax(0.5, 10.5, 12.5);
	printf("�ִ밪 = %.1f\n", f_res);

	return 0;
}