#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int hour, rate, rpay=0, opay=0, tpay; 
	printf("�ٹ��ð� �Է� : ");
	scanf("%d", &hour);
	printf("�ð������ �Է� : ");
	scanf("%d", &rate);
	if (hour <= 50)
		rpay = hour * rate;
	else {
		rpay = 50 * rate;
		opay = (hour - 50)*rate * 15 / 10;
	}
	tpay = opay + rpay;
	printf("�� �޿��� %d���Դϴ�.\n",tpay);
	return 0;
}