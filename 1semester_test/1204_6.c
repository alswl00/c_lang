#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n; float k1, k2, k3, k4, k5, t;
	printf("�ο� �� �Է� : ");
	scanf("%d", &n);
	printf("%d���� �����Ը� �Է��ϼ���.\n",n);
	scanf("%f %f %f %f %f", &k1, &k2, &k3, &k4, &k5);
	t = k1 + k2 + k3 + k4 + k5;
	printf("�������� ��   =  %6.2f\n", t);
	printf("�������� ��� =  %6.2f\n", t / 5);

	return 0;
}