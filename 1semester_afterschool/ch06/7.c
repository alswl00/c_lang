#include <stdio.h>

int main(void) {

	int x, y, z,max,mid,min;

	printf("�� ������ �Է�: ");
	scanf_s("%d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (x > z)
			printf("�ִ��: %d\n", x);
		else
			printf("�ִ��: %d\n", z);
	}
	else
	{
		if (y > z)
			printf("�ִ��: %d\n", y);
		else
			printf("�ִ��: %d\n", z);
		max = (x > y) ? x : y;
		min = (x < y) ? x : y;
	}
		if (max > z) {
			if (min < z) mid = z;
			else { mid = min; min = z; }
		}
		else {
			mid = max; max = z;
		}
		printf("�ִ밪: %d �߰���: %d �ּҰ� %d", max, mid, min);
	return 0;
}