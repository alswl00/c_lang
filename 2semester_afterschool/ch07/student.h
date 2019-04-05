#pragma once
struct student {
	char name[20];
	int kor, eng, math;
	double ave;
};

typedef struct student STUDENT;

STUDENT* Initialize(int num);
//int AddStudentInfo(STUDENT *std, int totalCnt);
void ListByAverage(STUDENT *std, int cnt);
void ListByName(STUDENT *std, int cnt);
void PrintStudList(STUDENT *std);
void FindStudent(STUDENT *std);
extern person;