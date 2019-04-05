#include <stdio.h>

int main() {
	int a=50;
	int *ap = &a;
	*ap = 10;

	printf("ap에 저장된 값 : %d\n", *ap);
	printf("ap자체의 조수값 : %p\n", &ap);
	
	return 0;
}