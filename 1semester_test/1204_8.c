#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n,i=0;
	printf("������ �� �Է�(����� 0 �Է�) >> ");
	
	 do {
		scanf("%d", &n);
		if (n >= 10 && n <= 20)
			i += n;
	 } while (n != 0);
	printf("10���� 20 ���� ���� �� : %d\n", i);
	return 0;
}