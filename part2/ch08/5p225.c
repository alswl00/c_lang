#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	int number;
	char name[10];
	int kor;
	int eng;
	int mat;
	int sum;
	float avg;
};

int main(void) {
	struct student list[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("학번을 입력하시오(정수): ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오(문자열): ");
		scanf("%s", list[i].name, 10);
		printf("국어 점수를 입력하시오(점수): ");
		scanf("%d", &list[i].kor);
		printf("영어 점수를 입력하시오(점수): ");
		scanf("%d", &list[i].eng);
		printf("수학 점수를 입력하시오(점수): ");
		scanf("%d", &list[i].mat);
		printf("========================================\n");

		list[i].sum = list[i].kor + list[i].eng + list[i].mat;
		list[i].avg = list[i].sum / (float)3;
	}
	printf("\n           성   적   표\n");
	printf("   학번  이름  국어  영어  수학  총점  평균  \n");

	for (i = 0; i < 3; i++) {
		printf("%6d %8s %4d %4d %4d %6d %f \n", list[i].number, list[i].name, list[i].kor, list[i].eng, list[i].mat, list[i].sum, list[i].avg);
	}
	return 0;
}