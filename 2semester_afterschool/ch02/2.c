#include <stdio.h>

void assign();

int main() {
	int cheoli = 0;
	assign(&cheoli);
	printf("�Լ��� ȣ��� �Ŀ� cheoli�� ����� �� : %d\n", cheoli);
	return 0;
}

void assign(int *ip)
{
	*ip = 100;
}