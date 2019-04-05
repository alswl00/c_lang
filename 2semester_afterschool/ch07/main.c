#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "menu.h"
#include "FileIO.h"
	int person=0;

int main(void) {

	
	printf("��ü �л����� �Է��ϼ��� : ");
	scanf("%d", &total_std_num);
	std = malloc(sizeof(STUDENT) *total_std_num);
	
	ReadData(std,total_std_num);

	while (1) {
		menu = SelectMenu();
		printf("Menu��=%d\n", menu);

		if (menu == QUIT_PROGRAM)
			break;
		switch (menu) {
		/*case ADD_STUDENT:
			person = AddStudentInfo(std, total_std_num);
			printf("main�� person��=%d\n", person);
			if (person == 0 | person == total_std_num)
				printf("�� �̻� �л� ������ �߰��� �� �����ϴ�.\n");
			else
				printf("�л� ������ �߰��Ǿ����ϴ�.\n");
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