#include <stdio.h>

int main(void)
{
	int a = 5, b = 10;

	--a;
	printf("%d\n", a--);
	printf("%d, %d\n", a, ++b);

	return 0;
}

