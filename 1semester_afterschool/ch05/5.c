#include <stdio.h>

int main(void)
{
	double a = 0, b = 0;

	printf("산술연산을 수행할 두 실수를 입력하세요\n");
	scanf_s("%lf, %lf", &a, &b);

	printf("%8.2f + %8.2f ==> %8.2f\n", a, b, a + b);
	printf("%08.2f - %08.2f ==> %8.2f\n", a, b, a - b);
	printf("%+8.2f * %+8.2f ==> %8.2f\n", a, b, a * b);
	printf("%-8.2f / %-8.2f ==> %8.2f\n", a, b, a / b);

	return 0;

}