#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "menu.h"
#include "FileIO.h"
	int person=0;

int main(void) {

	
	printf("전체 학생수를 입력하세요 : ");
	scanf("%d", &total_std_num);
	std = malloc(sizeof(STUDENT) *total_std_num);
	
	ReadData(std,total_std_num);

	while (1) {
		menu = SelectMenu();
		printf("Menu값=%d\n", menu);

		if (menu == QUIT_PROGRAM)
			break;
		switch (menu) {
		/*case ADD_STUDENT:
			person = AddStudentInfo(std, total_std_num);
			printf("main의 person값=%d\n", person);
			if (person == 0 | person == total_std_num)
				printf("더 이상 학생 정보를 추가할 수 없습니다.\n");
			else
				printf("학생 정보가 추가되었습니다.\n");
			break;*/
		case PRINT_STUDENT:
			PrintStudList(std);
			break;
		case FIND_STUDENT:
			FindStudent(std);
			break;
		case LIST_BY_AVE:
			ListByAverage(std,total_std_num);
			break;
		case LIST_BY_NAME:
			ListByName(std, total_std_num);
			break;

		}
	}

	WriteData(std);

	free(std);
	std = NULL;

	return 0;

}