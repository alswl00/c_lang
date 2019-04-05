#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("char ����: %d ~ %d\n", CHAR_MIN, CHAR_MAX);
	printf("unsighed char ����: %d ~ %hhu\n", 0, UCHAR_MAX);

	printf("unsighed short ����: %d ~ %u\n", 0, USHRT_MAX);
	printf("int ����: %d ~ %d\n", INT_MIN, INT_MAX);
	printf("unsighed int ����: %d ~ %u\n", 0, UINT_MAX);

	printf("log long int ����: %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsighed long long int ����: %d ~ %llu\n", 0, ULLONG_MAX);

	return 0;

}