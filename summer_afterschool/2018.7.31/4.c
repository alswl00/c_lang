#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	char name[7];
	int id;
	int score;
	char sub[13];
	char job[30];
};

int main(void) {
	
	struct student stu[5];

	for (int i = 0; i < 5; i++) {
		printf("이름 : ");
		gets(stu[i].name);
		printf("학번 : "); 
		gets(stu[i].id);
		printf("평균학점 : ");
		gets(stu[i].score);
		printf("학과 : ");
		gets(stu[i].sub);
		printf("진로 : ");
		gets(stu[i].job);
		printf("--------------------------------");
	}

	printf("이름  학번  평균평점  학과  진로\n");
	
	for (int i = 0; i < 5; i++) {
		printf("%s %d %d %s %s", stu[i].name, stu[i].id, stu[i].score, stu[i].sub, stu[i].job);
	}

	return 0;
}