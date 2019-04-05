#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct student {
	int score[3];
	int max;
	char grade;
}stu;
int main() {
	int people;
	printf("학생수 입력 : ");
	scanf("%d", &people);
	stu *s = (stu*)malloc(sizeof(stu)*people);
	for (int i = 0; i < people; i++) {
		s[i].max = 0;
		for (int j = 0; j < (sizeof(stu) - 5) / sizeof(int); j++) {
			printf("점수 %d 입력: ", j + 1);
			scanf("%d", &s[i].score[j]);
			if (s[i].score[j] < 0 || s[i].score[j]>100) {
				printf("다시 입력하세요. ====> ");
				j--;
				continue;
			}
			if (s[i].max < s[i].score[j]) s[i].max = s[i].score[j];
		}
		printf("\n");
		switch (s[i].max / 10) {
		case 10: case 9:
			s[i].grade = '5'; break;
		case 8:
			s[i].grade = '4'; break;
		case 7:
			s[i].grade = '3'; break;
		case 6:
			s[i].grade = '2'; break;
		default:
			s[i].grade = '1';
		}
	}

	for (int i = 0; i < people; i++) {
		printf("%2d", i + 1);
		for (int j = 0; j < (sizeof(stu) - 5) / sizeof(int); j++)
			printf("%6d", s[i].score[j]);
		printf("%5c\n", s[i].grade);
	}
	free(s);
	return 0;
}