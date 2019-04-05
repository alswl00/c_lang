#include <stdio.h>
int geagop(int num);
int main(void) {
	int a;

	printf("1-100사이의 정수를 입력하시오 : ");
	scanf_s("%d", &a);
	if (a >= 1 && a <= 100) {
		geagop(a);
	}
	else {
		printf("다시 입력하시오 1-100 사이의 정수를 입력하시오 : ");
		scanf_s("%d", &a);
	}
}
int geagop(int num) {//합계를 구하는 함수 
	printf("%d의 제곱은 %d\n", num, num*num);
	return 0;
}