#include <stdio.h>

int main(void) {

	int x, y, z,max,mid,min;

	printf("세 정수를 입력: ");
	scanf_s("%d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (x > z)
			printf("최대수: %d\n", x);
		else
			printf("최대수: %d\n", z);
	}
	else
	{
		if (y > z)
			printf("최대수: %d\n", y);
		else
			printf("최대수: %d\n", z);
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
		printf("최대값: %d 중간값: %d 최소값 %d", max, mid, min);
	return 0;
}