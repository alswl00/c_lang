#include <stdio.h>

int main() {
	int aa[5] = { 10,20,30,40 };

	printf("&aa[0] = %p\n", &aa[0]);
	printf("&aa[1] = %p\n", &aa[1]);
	printf("&aa[2] = %p\n\n", &aa[2]);

	printf("aa = %p\n", aa);
	printf("aa + 1 = %p\n", aa + 1);
	printf("aa + 2 = %p\n", aa + 2);
	printf("aa + 3 = %p\n \n", aa + 3);

	printf("*aa = %d\n", *aa);
	printf("*(aa + 1) = %d\n", *(aa + 1));
	printf("*(aa + 2) = %d\n", *(aa + 2));
	printf("*(aa + 3) = %d\n", *(aa + 3));

	return 0;
}