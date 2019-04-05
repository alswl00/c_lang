#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STUDENT 5
typedef struct student {
	char name[20];
	int korean, english, math;
	double average;
}STUDENT;
int main() {
	STUDENT std[MAX_STUDENT];
	int i;
	FILE *fp = NULL;
	for (i = 0; i < MAX_STUDENT;i++) {
		printf("학생 정보를 입력하세요 : ");
		scanf("%s %d %d %d", std[i].name,&std[i].korean,&std[i].english,&std[i].math);
		std[i].average = (double)(std[i].korean + std[i].english + std[i].math) / 3;
	}
	fp = fopen("report.txt", "w");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return -1;
	}
	for (i = 0; i < MAX_STUDENT; i++) {
		fprintf(fp,"%-10s %d %d %d %lf\n", std[i].name, std[i].korean, std[i].english, std[i].math, std[i].average);
	}
	fclose(fp);
}

/*
aaa 100 50 60
ddd 99 99 84
ddf 54 54 54
agg 99 99 99
ggg 65 98 87
*/