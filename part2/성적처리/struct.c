#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PEOPLE 3	//������� ��ũ�� ����� �빮�ڷ�(�ٲܼ����°��� �빮�ڷ�)
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
	char sub_name[SUB][6] = { "����", "����", "����", "c���" };

	/*for (int i = 0; i < PEOPLE; i++) {
		printf("�й� : ");
		scanf("%s", stu[i].id);
		printf("�̸� : ");
		scanf("%s", stu[i].name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s ���� : ", sub_name[j]);
				scanf("%d", &stu[i].score[j]);
				if (!(stu[i].score[j] < 0 || stu[i].score[j]>100)) break;
				printf("���� ����\n");
			}
		}	//���� �Է�*/

	for (int i = 0; i < PEOPLE; i++) {
		printf("�й� : ");
		scanf("%s", (*(p+ i)).id);
		printf("�̸� : ");
		scanf("%s", (*(p+i)).name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s ���� : ", sub_name[j]);
				scanf("%d", &((*(p+i)).score[j]));
				if (!((*(p+ i )).score[j] < 0 || (*(p+i )).score[j]>100)) break;
				printf("���� ����\n");
			}
		}	//���� �Է�
	}

	printf("%s\n", (*p).id);
	printf("%s\n", (*(p + 1)).id);

}