#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int hour, rate, rpay=0, opay=0, tpay; 
	printf("근무시간 입력 : ");
	scanf("%d", &hour);
	printf("시간당수당 입력 : ");
	scanf("%d", &rate);
	if (hour <= 50)
		rpay = hour * rate;
	else {
		rpay = 50 * rate;
		opay = (hour - 50)*rate * 15 / 10;
	}
	tpay = opay + rpay;
	printf("총 급여는 %d원입니다.\n",tpay);
	return 0;
}