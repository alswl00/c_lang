#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "S.h"

int main() {
	STUDENT std[5] = {
		{ "이모모",58.5 },
	{ "박모모",73.9 },
	{ "김모모",87.2 },
	{ "최모모",96.6 },
	{ "나모모",34.3 },
	};

	printf("*** 정렬 전 ***\n");
	PrintStudent(std, 5);

	qsort(std, 5, sizeof(STUDENT), Compare);

	printf("*** 이름 순 정렬 ***\n");
	PrintStudent(std, 5);

	return 0;
}