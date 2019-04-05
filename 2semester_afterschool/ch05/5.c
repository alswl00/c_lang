#include <stdio.h>

typedef struct student {
	char name[20];
	int korean, english, math;
	double average;
}STUDENT;

int main(void) {
	STUDENT s1 = { "김모모",100,100,100,0.0 };
	STUDENT s2 = { "박나나",90,80,88,0.0 };
	STUDENT s3 = { "이만수",45,32,44,0.0 };
	STUDENT* std[] = { &s1,&s2,&s3 };

	for (int i = 0; i < 3; i++) {
			std[i]->average = (double)(std[i]->korean + std[i]->english + std[i]->math) / 3;
		printf("%s %6.2lf\n", std[i]->name, std[i]->average);
	}
	
	
}