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
	printf("���丮�� ���� ���� ������ �Է��Ͻÿ�>>");
	scanf("%d", &i);

	printf("%d! = ", i);
	int k = fact(i);
	printf(" = %d\n",k);
	
}