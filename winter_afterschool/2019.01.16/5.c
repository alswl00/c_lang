#pragma warning(disable:4996)
#include <stdio.h>
void digit_print(int[]);
void number_check(int k);
int main() {
	int num;
	
	printf("0~9사이의 숫자를 입력하시오>>");
	scanf("%d", &num);
	number_check(num);
	return 0;
}
void digit_print(int a[]) {
	int i, j;
	for (i = 0; i <= 4; i++) {
		for (j = i * 4; j <= i * 4 + 3; j++) {
			if (a[j] == 1)
				printf("■");
			else printf("  ");
		}
		printf("\n");
	}
}
void number_check(int k) {
	int zero[] = {
		1,1,1,1,
		1,0,0,1,
		1,0,0,1,
		1,0,0,1,
		1,1,1,1 };
	int one[] = {
		0,0,1,0,
		0,0,1,0,
		0,0,1,0,
		0,0,1,0,
		0,0,1,0 };
	int two[] = {
		1,1,1,1,
		0,0,0,1,
		1,1,1,1,
		1,0,0,0,
		1,1,1,1 };
	int three[] = {
		1,1,1,1,
		0,0,0,1,
		1,1,1,1,
		0,0,0,1,
		1,1,1,1 };
	int four[] = {
		1,0,0,1,
		1,0,0,1,
		1,1,1,1,
		0,0,0,1,
		0,0,0,1 };
	int five[] = {
		1,1,1,1,
		1,0,0,0,
		1,1,1,1,
		0,0,0,1,
		1,1,1,1 };
	int six[] = {
		1,1,1,1,
		1,0,0,0,
		1,1,1,1,
		1,0,0,1,
		1,1,1,1 };
	int seven[] = {
		1,1,1,1,
		1,0,0,1,
		1,0,0,1,
		0,0,0,1,
		0,0,0,1 };
	int eight[] = {
		1,1,1,1,
		1,0,0,1,
		1,1,1,1,
		1,0,0,1,
		1,1,1,1 };
	int nine[] = {
		1,1,1,1,
		1,0,0,1,
		1,1,1,1,
		0,0,0,1,
		1,1,1,1 };
	switch (k) {
	case 0:digit_print(zero);
		break;
	case 1:digit_print(one);
		break;
	case 2:digit_print(two);
		break;
	case 3:digit_print(three);
		break;
	case 4:digit_print(four);
		break;
	case 5:digit_print(five);
		break;
	case 6:digit_print(six);
		break;
	case 7:digit_print(seven);
		break;
	case 8:digit_print(eight);
		break;
	case 9:digit_print(nine);
		break;
	default:
	}

	
}