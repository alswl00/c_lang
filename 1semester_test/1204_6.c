#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n; float k1, k2, k3, k4, k5, t;
	printf("인원 수 입력 : ");
	scanf("%d", &n);
	printf("%d명의 몸무게를 입력하세요.\n",n);
	scanf("%f %f %f %f %f", &k1, &k2, &k3, &k4, &k5);
	t = k1 + k2 + k3 + k4 + k5;
	printf("몸무게의 합   =  %6.2f\n", t);
	printf("몸무게의 평균 =  %6.2f\n", t / 5);

	return 0;
}