#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float add(int a, int b) {
	return(float)a + b;
}
float subtract(int a, int b) {
	return (float)a - b;
}
float multiply(int a, int b) {
	return (float)a * b;
}
float divide(int a, int b) {
	return (float)a / b;
}

int main() {
	int menu;
	int su1, su2;
	float(*calc[4])(int, int) = { add,subtract,multiply,divide };	//함수를 포인터로 선언	//add
	//int sum= add(5, 7);
	printf("계산할 연산식을 고르세요\n");
	printf("1.덧셈    2.뺄셈    3.곱셈    4.나눗셈\n");
	scanf("%d", &menu);
	printf("계산할 두 수를 입력하세요\n");
	scanf("%d %d", &su1, &su2);
	float sum = calc[menu-1](su1, su2);
	if(menu==4) printf("연산결과는 %.2f입니다.\n", sum);
	else printf("연산결과는 %.0f입니다.\n", sum);
	//printf("함수의 주소 : %p", add);
	return 0;

}