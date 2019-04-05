#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PEOPLE 3	//약속으로 매크로 상수는 대문자로(바꿀수없는값은 대문자로)
#define SUB 4
void line(int);
int main() {
	char id[PEOPLE][5], name[PEOPLE][7];
	int score[PEOPLE + 1][SUB + 1] = { 0 };
	float avg[PEOPLE];
	int rank[PEOPLE];
	char sub_name[SUB][6] = { "국어", "영어", "수학", "c언어" };

	//입력
	for (int i = 0; i < PEOPLE; i++) {
		printf("학번 : ");
		scanf("%s", id[i]);
		printf("이름 : ");
		scanf("%s", name[i]);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s 점수 : ", sub_name[j]);
				scanf("%d", &score[i][j]);
				if (!(score[i][j] < 0 || score[i][j]>100)) break;
				printf("점수 오류\n");
			}
		}	//점수 입력

		for (int j = 0; j < SUB; j++) {
			score[i][SUB] += score[i][j];
			score[PEOPLE][j] += score[i][j];
		}

		avg[i] = (float)score[i][SUB] / SUB;
		rank[i] = 1;
		printf("\n");
	} //입력, 총점 평균 계산, 석차 초기화

	for (int i = 0; i < PEOPLE+1; i++) {
			score[PEOPLE][SUB] += score[PEOPLE][i];
	}

	for (int i = 0; i < PEOPLE - 1; i++) {
		for (int j = i + 1; j < PEOPLE; j++) {
			if (score[i][SUB] < score[j][SUB])
				rank[i]++;
			else if (score[i][SUB] > score[j][SUB])
				rank[j]++;
		};
	}	//석차 계산


		//출력
	line(85);
	for (int i = 0; i < PEOPLE; i++) {
		printf("\n%-8s%-8s", id[i], name[i]);

		for (int j = 0; j < SUB; j++)
			printf("%8d", score[i][j]);

		printf("%8d%10.2f\t", score[i][SUB], avg[i]);
		//학번 이름 점수 총점 평균 출력

		switch ((int)avg[i] / 10) {
		case 10:case 9:printf("A"); break;
		case 8:printf("B"); break;
		case 7:printf("C"); break;
		case 6: printf("D"); break;
		default:printf("F");
		}	//등급 출력

		printf("%8d\n", rank[i]);	//석차 출력

		printf("\n");
		line(85);

	}
	
	printf("                ");
	for (int j = 0; j < SUB; j++) {
		printf("%8d", score[PEOPLE][j]);
	}	
	printf("%8d", score[PEOPLE][SUB]);
	//과목별, 전체 총점 출력
	printf("\n");		
	//출력

	return 0;
}

void line(int a) {
	for (int i = 0; i < a; i++)
		printf("-");
	printf("\n");
	//printf("---------------------------------------------------------------------------------------\n");
}