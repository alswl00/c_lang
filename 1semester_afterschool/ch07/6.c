//������ �Է¹޾� (-1�� �ԷµǸ� ���̻� �Է¹��� ����) �Է¹��� ������ ������ ��� ���ϱ� (0~100��)
#include <stdio.h>

int main(void) {
	int i = 0; int sum = 0;
	do {
		int a;
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &a);
		if (a <= 100 && a >= 0) {
			i++;
			sum += a;
		}
		else if (a == -1) { break; }
	} while (1);
	printf("���� : %d\n", sum);
	printf("��� : %d\n", sum / i);

}