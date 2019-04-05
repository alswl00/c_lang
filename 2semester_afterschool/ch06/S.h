#pragma once
typedef struct student {
	char name[20];
	double ave;
}STUDENT;

int Compare(const void *e1, const void *e2);
void PrintStudent(const STUDENT* std, int num);