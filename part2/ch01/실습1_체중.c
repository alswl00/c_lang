//p.73 실습 1번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {
	int No;
	char Gender;
	char Name[7];
	float Weight;
	float Bodyfat;

	printf("성별:");
	scanf("%c", &Gender);
	printf("번호:");
	scanf("%d", &No);

	printf("이름:");
	scanf("%s", Name);	//배열의 경우에는 scanf에 주소(&)를 안씀 => 변수명이 주소.
	printf("체중:");
	scanf("%f", &Weight);
	printf("체지방:");
	scanf("%f", &Bodyfat);

	printf("%c\t", Gender);
	printf("%d\t", No);
	printf("%s\t", Name);
	printf("%f\t", Weight);
	printf("%.1f\n", Bodyfat);	//소수점 뒤 한자리만 나오게 하고 싶을 때 .1 을 f 앞에 붙임
}