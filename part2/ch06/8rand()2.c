#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num, n,i;
	srand((unsigned)time(NULL));
	num = rand() % 101 + 50;
	printf("50���� 150���� ���� ���ڸ� �Է��ϼ���\n");
	for (i = 0; i < 8; i++) {
		scanf("%d", &n);
		if (n == num) {
			printf("�����Դϴ�\n");
			break;
		}
		else if (n > num) printf("down\n");
		else printf("up\n");
		
	}
	if(i==8) printf("������ %d�Դϴ�.\n",num);
}