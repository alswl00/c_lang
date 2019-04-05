#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int p, r, c, t;
	printf("구입한 학용품의 갯수를 입력하시오.\n");
	printf("연필 자 필통 : ");
	scanf("%d %d %d", &p, &r, &c);
	t = p * 100 + r * 250 + c * 3000;
	printf("총 지불 금액은 %d원입니다.\n", t);
	return 0;
}