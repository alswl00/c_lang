#include <stdio.h>

int main(void)
{
	int n = 16, ret_value = 0;

	ret_value = printf("Hello!\n");
	printf("printf() 반환값(출력된 문자수): %d\n", ret_value);

	ret_value = printf("출력값: %d %i %o %#o %#x %#X\n", n, n, n, n, n, n);
	printf("반환값(출력된 문자수): %d\n", ret_value);

	printf("%d %i\n",55,55);
	printf("%o %#o\n", 55, 55);
	printf("%x %#x %#X\n", 55, 55, 55);

	return 0;

}