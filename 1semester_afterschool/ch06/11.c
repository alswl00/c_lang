#include <stdio.h>

int main(void) {

	int month;
	scanf_s("%d", &month);

	switch (month) {
	case 1: case 2: case 3: printf("1분기\n"); break;
	case 4: case 5: case 6: printf("2분기\n"); break;
	case 7: case 8: case 9: printf("3분기\n"); break;
	case 10: case 11: case 12: printf("4분기\n"); break;
	default: printf("잘못 입력하셨습니다\n");
	}
	return 0;
}