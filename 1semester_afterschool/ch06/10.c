#include <stdio.h>

int main(void) {
	
	double tax;
	int income;
	printf("연간 소득 금액(원): ");	
	scanf_s("%d", &income);
	if (income <= 12000000) {
		tax = income * 0.06;
	}
	else if (income <= 46000000) {
		tax = 720000+(income-12000000) * 0.15;
	}
	else if (income <= 88000000) {
		tax = 8520000+(income-46000000) * 0.24;
	}
	else if (income <= 300000000) {
		tax = 15900000+(income-88000000) * 0.35;
	}
	else {
		tax = 90100000+(income-300000000) * 0.38;
	}
	printf("과세 금액:%10.0lf\n",tax);

}