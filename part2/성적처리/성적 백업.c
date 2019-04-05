#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SUB 4
void line(int);
char sub_name[SUB][6] = { "����", "����", "����", "c���" };
struct student {
	char id[5];
	char name[7];
	int score[SUB + 1];
	float avg;
	int rank;
	char grade;

};
void input(struct student *a, int p);
void print(struct student *a, int p);
void cal(struct student *a, int p);
void ranking(struct student *a, int p);
int main() {
	int PEOPLE;

	printf("�� ���� �Է��Ͻðڽ��ϱ�?>>");
	scanf("%d", &PEOPLE);

	struct student *stu = (struct student *)malloc(sizeof(struct student)*PEOPLE);
	int ban_tot[SUB + 1] = { 0 };
	float ban_avg[SUB + 1] = { 0.0 };

	input(stu, PEOPLE);		//���� �Է�
	cal(stu, PEOPLE);
	ranking(stu, PEOPLE);	//���� ���

	for (int i = 0; i < SUB; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			ban_tot[i] += stu[j].score[i];
		}
		ban_tot[4] += ban_tot[i];
		ban_avg[i] = (float)(ban_tot[i]) / PEOPLE;
	}
	ban_avg[4] = (float)(ban_tot[4]) / (PEOPLE*SUB);

	//���
	line(85);

	print(stu, PEOPLE);

	printf("%-16s", "���� : ");
	for (int i = 0; i < SUB + 1; i++)
		printf("%8d", ban_tot[i]);
	printf("\n");
	printf("%-16s", "��� : ");
	for (int i = 0; i < SUB + 1; i++)
		printf("%8.2f", ban_avg[i]);
	printf("\n");
	//���
	return 0;
}
void input(struct student *a, int p) {
	FILE *ifp;
	ifp = fopen("a.txt", "r");
	for (int i = 0; i < p; i++) {
		(a + i)->score[SUB] = 0;
		(a + i)->avg = 0;
		/*printf("�й� : ");
		fscanf(ifp,"%s", (a + i)->id);
		printf("�̸� : ");
		fscanf(ifp,"%s", (a + i)->name);

		for (int j = 0; j < SUB; j++) {
		while (1) {
		printf("%s ���� : ", sub_name[j]);
		fscanf(ifp,"%d", &(a + i)->score[j]);
		if (!((a + i)->score[j] < 0 || (a + i)->score[j]>100)) break;
		printf("���� ����\n");
		}
		}
		printf("\n");*/
		fscanf(ifp, "%s %s %d %d %d %d", (a + i)->id, (a + i)->name, &(a + i)->score[0], &(a + i)->score[1], &(a + i)->score[2], &(a + i)->score[3]);
	}
	fclose(ifp);
}
void print(struct student *a, int p) {
	FILE *ofp;
	ofp = fopen("b.txt", "w");
	for (int i = 0; i < p; i++) {
		printf("\n%-8s%-8s", (a + i)->id, (a + i)->name);

		for (int j = 0; j < SUB; j++)
			printf("%8d", (a + i)->score[j]);

		printf("%8d%10.2f\t", (a + i)->score[SUB], (a + i)->avg);
		//�й� �̸� ���� ���� ��� ���

		switch ((int)(a + i)->avg / 10) {
		case 10:case 9:(a + i)->grade = 'A'; break;
		case 8: (a + i)->grade = 'B'; break;
		case 7:(a + i)->grade = 'C'; break;
		case 6: (a + i)->grade = 'D'; break;
		default:(a + i)->grade = 'F';
		}	//��� ���
		printf("%c", (a + i)->grade);

		printf("%8d\n", (a + i)->rank);	//���� ���

		printf("\n");

		line(85);

		fprintf(ofp, "%s %s %d %d %d %d %d %f %c %d\n", (a + i)->id, (a + i)->name, (a + i)->score[0], (a + i)->score[1], (a + i)->score[2], (a + i)->score[3], (a + i)->score[SUB], (a + i)->avg, (a + i)->grade, (a + i)->rank);
	}
	fclose(ofp);
}
void cal(struct student *a, int p) {
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < SUB; j++) {
			a[i].score[SUB] += a[i].score[j];
		}
		a[i].avg = (float)a[i].score[SUB] / SUB;
		a[i].rank = 1;
		//���� ��� ���, ���� �ʱ�ȭ
	}
}
void ranking(struct student *a, int p) {
	for (int i = 0; i < p - 1; i++) {
		for (int j = i + 1; j < p; j++) {
			if (a[i].score[SUB] < a[j].score[SUB])
				a[i].rank++;
			else if (a[i].score[SUB] > a[j].score[SUB])
				a[j].rank++;
		}
	}
}
void line(int a) {
	for (int i = 0; i < a; i++)
		printf("-");
	printf("\n");
	//printf("---------------------------------------------------------------------------------------\n");
}