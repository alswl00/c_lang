#include <stdio.h>

int main(void) {
	
	double x = 0, y = 0, result = 0;

	printf("�� �Ǽ��� �Է�: ");
	scanf_s("%lf %lf", &x, &y);
	
	if (x > y)
	{
		result = x / y;
	}
	else if (x == y)
	{
		result = x * y;
	}
	else
	{
		result = x + y;
	}
	printf("���� ���: %.2f\n", result);

	return 0;
}