#include <stdio.h>

int main(void)
{
	int n = 16, ret_value = 0;

	ret_value = printf("Hello!\n");
	printf("printf() ��ȯ��(��µ� ���ڼ�): %d\n", ret_value);

	ret_value = printf("��°�: %d %i %o %#o %#x %#X\n", n, n, n, n, n, n);
	printf("��ȯ��(��µ� ���ڼ�): %d\n", ret_value);

	printf("%d %i\n",55,55);
	printf("%o %#o\n", 55, 55);
	printf("%x %#x %#X\n", 55, 55, 55);

	return 0;

}