#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	/*int i = 1;
	while (i > 0)
	{
		printf("���� ������ �Է��Ͻÿ�.\n");
		scanf("%d", &i);
	}
	printf("�߸� �Է��߽��ϴ�!\n");*/

	int m, n=8;
	printf("------------\n");
	while (n <= 9) {
		m = 1; while (m <= 9) {
			printf("%d*%d = %2d\n", n, m, n*m);
			m++;
		}
		printf("------------\n");
		n++;
	}

	return 0;
}