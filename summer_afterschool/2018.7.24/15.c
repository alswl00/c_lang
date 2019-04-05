#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year, month, d=28;
	printf("년도 : ");
	scanf("%d", &year);
	printf("월 : ");
	scanf("%d", &month);

	if (year % 4 == 0)
		d++;

	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		d = 31; break;
	case 4: case 6: case 9: case 11:
		d = 30; break;
	}

	printf("%d년 %d월의 말일 : %d일\n", year, month, d);

	return 0;
}