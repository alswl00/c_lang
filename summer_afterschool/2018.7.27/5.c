#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year, month;
	int day[3] = { 31,28,30 };
	printf("년도 : ");
	scanf("%d", &year);
	printf("월 : ");
	scanf("%d", &month);
	switch (month) {
	case 1:case 3: case 5: case 7: case 8: case 10: case 12:
		printf("%d일", day[0]); break;
	case 4: case 6: case 9: case 11:
		printf("%d일", day[2]); break;
	case 2:
		printf("%d일", day[1]);
	}
	printf("\n");

	return 0;
}