#include <stdio.h>

int main() {
	int a=50;
	int *ap = &a;
	*ap = 10;

	printf("ap�� ����� �� : %d\n", *ap);
	printf("ap��ü�� ������ : %p\n", &ap);
	
	return 0;
}