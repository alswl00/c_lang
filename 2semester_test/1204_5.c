#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int change(int num);
int main(){
	int num,f;
	printf("���� �Է� : ");
	scanf("%d", &num);

	f=change(num);
	printf("ȭ�� �µ� : %d\n", f);
	return 0;
}

int change(int num) {
	int f;
	f = num * 9 / 5 + 32;
	return f;
}