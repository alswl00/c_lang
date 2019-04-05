#include <stdio.h>

int main(void)
{
	int a = 10, b = 5, m = 1;
	int result;
	enum boolean{false,true};
	enum boolean b1, b2;
	b1 = true; b2 = false;

	result = (a < b) && (m++ == 1);
	printf("m=%d result=%d\n", m, result);

	result = (a > b) || (--m == 0);
	printf("m=%d result=%d\n", m, result);
	printf("%d\n", true && false);
	printf("%d\n", b1 && b2);

	return 0;
}