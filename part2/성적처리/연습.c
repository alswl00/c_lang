#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PEOPLE 3	//������� ��ũ�� ����� �빮�ڷ�(�ٲܼ����°��� �빮�ڷ�)
#define SUB 4
void line(int);
int main() {
	char id[PEOPLE][5], name[PEOPLE][7];
	int score[PEOPLE + 1][SUB + 1] = { 0 };
	float avg[PEOPLE];
	int rank[PEOPLE];
	char sub_name[SUB][6] = { "����", "����", "����", "c���" };

	//�Է�
	for (int i = 0; i < PEOPLE; i++) {
		printf("�й� : ");
		scanf("%s", id[i]);
		printf("�̸� : ");
		scanf("%s", name[i]);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s ���� : ", sub_name[j]);
				scanf("%d", &score[i][j]);
				if (!(score[i][j] < 0 || score[i][j]>100)) break;
				printf("���� ����\n");
			}
		}	//���� �Է�

		for (int j = 0; j < SUB; j++) {
			score[i][SUB] += score[i][j];
			score[PEOPLE][j] += score[i][j];
		}

		avg[i] = (float)score[i][SUB] / SUB;
		rank[i] = 1;
		printf("\n");
	} //�Է�, ���� ��� ���, ���� �ʱ�ȭ

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
	}	//���� ���


		//���
	line(85);
	for (int i = 0; i < PEOPLE; i++) {
		printf("\n%-8s%-8s", id[i], name[i]);

		for (int j = 0; j < SUB; j++)
			printf("%8d", score[i][j]);

		printf("%8d%10.2f\t", score[i][SUB], avg[i]);
		//�й� �̸� ���� ���� ��� ���

		switch ((int)avg[i] / 10) {
		case 10:case 9:printf("A"); break;
		case 8:printf("B"); break;
		case 7:printf("C"); break;
		case 6: printf("D"); break;
		default:printf("F");
		}	//��� ���

		printf("%8d\n", rank[i]);	//���� ���

		printf("\n");
		line(85);

	}
	
	printf("                ");
	for (int j = 0; j < SUB; j++) {
		printf("%8d", score[PEOPLE][j]);
	}	
	printf("%8d", score[PEOPLE][SUB]);
	//����, ��ü ���� ���
	printf("\n");		
	//���

	return 0;
}

void line(int a) {
	for (int i = 0; i < a; i++)
		printf("-");
	printf("\n");
	//printf("---------------------------------------------------------------------------------------\n");
}