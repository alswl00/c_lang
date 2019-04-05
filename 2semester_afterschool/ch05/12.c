#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct student {
	char name[20];
	int kor, eng, math;
	int total;
	double average;
}STUDENT;


void InputStudentInfo(STUDENT *arr, int n);
void PrintStudentInfo(STUDENT *arr, int n);

int main() {
	int num;
	STUDENT *std = { NULL };

	printf("전체 학생 수를 입력하세요 : ");
	scanf("%d", &num);
	std = (STUDENT*) malloc(sizeof(STUDENT)*num);

	printf("%d명의 학생 정보를 입력하세요.\n",num);
	InputStudentInfo(std, num);
	PrintStudentInfo(std, num);
	free(std);
	//std = NULL;
	return 0;
}

void InputStudentInfo(STUDENT *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("이름 : ");
		scanf("%s", arr[i].name);
		printf("국어 : ");
		scanf("%d", &arr[i].kor);
		printf("영어 : ");
		scanf("%d", &arr[i].eng);
		printf("수학 : ");
		scanf("%d", &arr[i].math);
		arr[i].total = arr[i].kor + arr[i].eng + arr[i].math;
		arr[i].average = (double)(arr[i].total / 3);
	}
}
void PrintStudentInfo(STUDENT *arr, int n) {
	printf("< 전체 성적표 >\n");
	printf("이름  국어 영어 수학 총점 평균\n");
	for (int i = 0; i < n; i++) {
		printf("%-3s %3d %4d %4d %4d %3.2f\n", arr[i].name, arr[i].kor, arr[i].eng, arr[i].math, arr[i].total, arr[i].average);
	}
}