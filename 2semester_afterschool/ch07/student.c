#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "student.h"
#include "menu.h"

STUDENT *Initialize(int num) {
	STUDENT *p = (STUDENT*)malloc(sizeof(STUDENT )*num));
	if (p != NULL)
		memset(p, 0, sizeof(STUDENT)*num);
	return p;
}
/*int AddStudentInfo(STUDENT *std, int totalCnt) {
	STUDENT *p = NULL;
	if (totalCnt == person) return 0;

	p = &std[person];

	printf("이름, 국어, 영어, 수학 점수를 입력 : \n");
	scanf("%s %d %d %d", p->name, &p->kor,&p->eng,&p->math);
	p->ave = (double)(p->kor + p->eng + p->math) / 3;

	(person)++;
	return person;

}*/

void PrintStudList(STUDENT *std) {

	printf("===========================\n");
	printf("이름 국어 영어 수학 평균\n");
	for (int i = 0; i < person; i++) {
		printf("%s%5d%5d%5d%7.2f\n", std[i].name, std[i].kor, std[i].eng, std[i].math, std[i].ave);
	}
	printf("===========================\n");
}

void FindStudent(STUDENT *std) {
	int findMenu = 0;
	STUDENT *p = NULL;
	char c[20];
	printf("찾을 학생명: ");
	scanf("%s", c);
	for (int i = 0; i < person;i++) {
		p = &std[i];
		if (strcmp(c, p->name) == 0){
			printf("%s%5d%5d%5d%7.2f\n", p->name, p->kor, p->eng, p->math, p->ave);
			while (1) {
				findMenu = SelectFindMenu();
				if (findMenu == PREVIOUS_MENU) break;
				switch (findMenu) {
				case MODIFY_STUDENT:
					printf("국어, 영어, 수학 점수를 입력 : \n");
					scanf("%d %d %d", &p->kor, &p->eng, &p->math);
					p->ave = (double)(p->kor + p->eng + p->math) / 3;
					break;
				case DELETE_STUDENT:
					for (int j = i; j < person; j++) {
						std[j] = std[j + 1];
					}
						person--;
						break;
				}
			}
		}
	}
}

void ListByAverage(STUDENT *std, int cnt) {
	STUDENT temp;
	for (int i = 0; i < cnt - 1; i++) {
		for (int j = i+1; j < cnt; j++) {
			if (std[i].ave < std[j].ave) {
				temp = std[i];
				std[i] = std[j];
				std[j] = temp;
			}
		}
	}
	PrintStudList(std);
}

void ListByName(STUDENT *std, int cnt) {
	STUDENT temp;
	for (int i = 0; i < cnt-1; i++) {
		for (int j = i+1; j < cnt; j++) {
			for (int k = 0; k < sizeof(std[j].name); k++){
				if (std[i].name[k] > std[j].name[k]) {
					temp = std[i];
					std[i] = std[j];
					std[j] = temp;
				}
			}
		}
	}
	PrintStudList(std);
}