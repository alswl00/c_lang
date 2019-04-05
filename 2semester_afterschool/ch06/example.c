#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
	char name[20];
	double ave;
}STUDENT;

int Compare(const void *e1, const void *e2);
void PrintStudent(const STUDENT* std, int num);

int main() {
	STUDENT std[5] = {
		{"�̸��",58.5},
	{"�ڸ��",73.9},
	{"����",87.2},
	{"�ָ��",96.6},
	{"�����",34.3},
	};

	printf("*** ���� �� ***\n");
	PrintStudent(std, 5);

	qsort(std, 5, sizeof(STUDENT), Compare);

	printf("*** �̸� �� ���� ***\n");
	PrintStudent(std, 5);

	return 0;
}

int Compare(const void *e1, const void *e2) {
	STUDENT *p1 = (STUDENT *)e1;
	STUDENT *p2 = (STUDENT *)e2;
	return strcmp(p1->name, p2->name);
}

void PrintStudent(const STUDENT* std, int num) {
	int i;
	for (i = 0; i < 5; i++)
		printf("%-10s %5.1f\n", std[i].name, std[i].ave);
	printf("\n");
}