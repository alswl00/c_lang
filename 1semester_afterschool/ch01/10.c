#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("char 범위: %d ~ %d\n", CHAR_MIN, CHAR_MAX);
	printf("unsighed char 범위: %d ~ %hhu\n", 0, UCHAR_MAX);

	printf("unsighed short 범위: %d ~ %u\n", 0, USHRT_MAX);
	printf("int 범위: %d ~ %d\n", INT_MIN, INT_MAX);
	printf("unsighed int 범위: %d ~ %u\n", 0, UINT_MAX);

	printf("log long int 범위: %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsighed long long int 범위: %d ~ %llu\n", 0, ULLONG_MAX);

	return 0;

}