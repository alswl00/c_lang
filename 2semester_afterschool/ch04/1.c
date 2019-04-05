#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	char name[20];
	int korean, english, math;
	double average;
}s1;

int main() {
	
	s1.korean = 100;
	s1.english = 100;
	s1.math = 100;
	strcpy(s1.name, "김모모");
	s1.average = (double)(s1.korean + s1.english + s1.math) / 3;

	struct student s2 = { "박나나",90,78,86 };
	s2.average = (double)(s2.korean + s2.english + s2.math) / 3;

	printf("이름 : %s\t국어 : %d\t영어 : %d\t수학 : %d\t평균: %.2f\n", s1.name, s1.korean, s1.english, s1.math, s1.average);
	printf("이름 : %s\t국어 : %d\t영어 : %d\t수학 : %d\t평균: %.2f\n", s2.name, s2.korean, s2.english, s2.math, s2.average);
}