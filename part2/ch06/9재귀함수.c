#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int a) {
	printf("%d ", a);
	if (a != 1) printf(" * ");
	if (a == 1) return 1;
	else return fact(a - 1)*a;
}

int main() {
	int i;
	printf("팩토리얼 값을 구할 정수를 입력하시오>>");
	scanf("%d", &i);

	printf("%d! = ", i);
	int k = fact(i);
	printf(" = %d\n",k);
	
}