#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PEOPLE 3	//약속으로 매크로 상수는 대문자로(바꿀수없는값은 대문자로)
#define SUB 4
void line(int);

struct student {
	char id[5];
	char name[7];
	int score[SUB + 1];
	float avg;
	int rank;
}stu[PEOPLE];

int main() {
	struct student *p = stu;
	char sub_name[SUB][6] = { "국어", "영어", "수학", "c언어" };

	/*for (int i = 0; i < PEOPLE; i++) {
		printf("학번 : ");
		scanf("%s", stu[i].id);
		printf("이름 : ");
		scanf("%s", stu[i].name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s 점수 : ", sub_name[j]);
				scanf("%d", &stu[i].score[j]);
				if (!(stu[i].score[j] < 0 || stu[i].score[j]>100)) break;
				printf("점수 오류\n");
			}
		}	//점수 입력*/

	for (int i = 0; i < PEOPLE; i++) {
		printf("학번 : ");
		scanf("%s", (*(p+ i)).id);
		printf("이름 : ");
		scanf("%s", (*(p+i)).name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s 점수 : ", sub_name[j]);
				scanf("%d", &((*(p+i)).score[j]));
				if (!((*(p+ i )).score[j] < 0 || (*(p+i )).score[j]>100)) break;
				printf("점수 오류\n");
			}
		}	//점수 입력
	}

	printf("%s\n", (*p).id);
	printf("%s\n", (*(p + 1)).id);

}