#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "S.h"

int main() {
	STUDENT std[5] = {
		{ "�̸��",58.5 },
	{ "�ڸ��",73.9 },
	{ "����",87.2 },
	{ "�ָ��",96.6 },
	{ "�����",34.3 },
	};

	printf("*** ���� �� ***\n");
	PrintStudent(std, 5);

	qsort(std, 5, sizeof(STUDENT), Compare);

	printf("*** �̸� �� ���� ***\n");
	PrintStudent(std, 5);

	return 0;
}