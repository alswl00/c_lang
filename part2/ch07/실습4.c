#include <stdio.h>
int plus(int x, int y);
int minus(int x, int y);

int main(void) {
	int result;
	int(*ptr_func)(int, int);
	int a, b;
	printf("<<<<< 두 수의 합과 차를 구하는 프로그램>> \n");
	printf("첫 번째 수를 입력하시오 ");
	scanf_s("%d", &a);
	printf("두 번째 수를 입력하시오 ");
	scanf_s("%d", &b);

	ptr_func = plus;
	result = ptr_func(a, b);
	printf("%5d + %5d = %7d\n", a, b, result);

	ptr_func = minus;
	result = ptr_func(a, b);
	if (a > b) {
		printf("%5d - %5d = %7d\n", a, b, result);
	}
	else {
		printf("%5d - %5d = %7d\n", a, b, result);
	}
	return 0;
}

int plus(int x, int y) {
	return x + y;
}
int minus(int x, int y) {
	if (x > y)
		{return x - y; }
	else { return y - x; }
}