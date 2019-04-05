#include <stdio.h>

void assign();

int main() {
	int cheoli = 0;
	assign(&cheoli);
	printf("함수가 호출된 후에 cheoli에 저장된 값 : %d\n", cheoli);
	return 0;
}

void assign(int *ip)
{
	*ip = 100;
}