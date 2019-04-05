#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int no;
	char id[9];
	char name[20];
	int test1, test2, project1, project2, att; //test[5];
	float score[5];
	char total[3];
};

typedef struct student STUDENT;

void cal(STUDENT *std, int cnt);

int main(void) {
	FILE *ifp, *ofp;
	int res;
	int cnt=0;
	ifp = fopen("a.txt", "r");
	ofp = fopen("b.txt", "w");

	STUDENT *std = NULL;

	std= (int *)(malloc(sizeof(STUDENT)));

	for (int i = 0;; i++, cnt++) {
		res = fscanf(ifp, "%d %s %s %d %d %d %d %d", &std[i].no, std[i].id, std[i].name, &std[i].test1,&std[i].test2,&std[i].project1,&std[i].project2,&std[i].att);
		//std[i].ave = (double)(std[i].kor + std[i].eng + std[i].math) / 3;
		if (res == EOF) break;
	}

	cal(std, cnt);

	fprintf(ofp,"=================================================\n");
	fprintf(ofp,"                      己利贸府 橇肺弊伐\n");
	fprintf(ofp,"=================================================\n");
	for (int i = 0; i < cnt; i++) {
		fprintf(ofp, "%d %s %s %d %d %d %d %d\n", std[i].no, std[i].id, std[i].name, std[i].test1, std[i].test2, std[i].project1, std[i].project2, std[i].att);
		for (int j = 0; j < 5; j++) {
			fprintf(ofp,"%.1f ", std[i].score[j]);
			if (j == 3) fprintf(ofp,"%d ", std[i].att);
		}
		fprintf(ofp, "%s", std[i].total);
		fprintf(ofp, "\n\n");
	}
	fclose(ifp);
	fclose(ofp);
	free(std);
	return 0;
}

void cal(STUDENT *std, int cnt) {
	for (int i = 0; i < cnt; i++) {
		std[i].score[4] = 0;
		std[i].score[0] = (float)((std[i].test1 / 100.0)*30.0);
		std[i].score[1] = (float)((std[i].test2 / 100.0)*40.0);
		std[i].score[2] = (float)((std[i].project1 / 100.0)*20.0);
		std[i].score[3] = (float)((std[i].project2 / 100.0)*20.0);
		for (int j = 0; j < 4; j++) {
			std[i].score[4] += std[i].score[j];
		}
		std[i].score[4] += std[i].att;
		if (std[i].score[4] >= 95) strcpy(std[i].total, "A+");
		else if (std[i].score[4] >= 90) strcpy(std[i].total, "A0");
		else if (std[i].score[4] >= 85) strcpy(std[i].total, "B+");
		else if (std[i].score[4] >= 80) strcpy(std[i].total, "B0");
		else if (std[i].score[4] >= 75) strcpy(std[i].total, "C+");
		else if (std[i].score[4] >= 70) strcpy(std[i].total, "C0");
		else if (std[i].score[4] >= 65) strcpy(std[i].total, "D+");
		else if (std[i].score[4] >= 60) strcpy(std[i].total, "D0");
		else strcpy(std[i].total, "F");
	}
}