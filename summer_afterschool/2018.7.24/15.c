#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year, month, d=28;
	printf("�⵵ : ");
	scanf("%d", &year);
	printf("�� : ");
	scanf("%d", &month);

	if (year % 4 == 0)
		d++;

	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		d = 31; break;
	case 4: case 6: case 9: case 11:
		d = 30; break;
	}

	printf("%d�� %d���� ���� : %d��\n", year, month, d);

	return 0;
}