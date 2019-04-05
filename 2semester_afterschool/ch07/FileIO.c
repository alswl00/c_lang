#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "menu.h"
#include "FileIO.h"

void ReadData(STUDENT *std,int cnt) {
	FILE *ifp;
	int res;

	ifp = fopen("test.txt", "r");

	for (int i = 0; i < cnt; i++) {
		res = fscanf(ifp, "%s %d %d %d", std[i].name, &std[i].kor, &std[i].eng, &std[i].math);
		std[i].ave = (double)(std[i].kor + std[i].eng + std[i].math) / 3;
		if (res == EOF) break;
		person++;
	}

	fclose(ifp);
}

void WriteData(STUDENT *std) {
	FILE *ofp;

	ofp = fopen("test2.txt", "w");

	for (int i = 0; i < person; i++)
		fprintf(ofp, "%s %d %d %d %lf\n", std[i].name, std[i].kor, std[i].eng, std[i].math, std[i].ave);

	fclose(ofp);
}