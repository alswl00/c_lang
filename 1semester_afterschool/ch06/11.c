#include <stdio.h>

int main(void) {

	int month;
	scanf_s("%d", &month);

	switch (month) {
	case 1: case 2: case 3: printf("1�б�\n"); break;
	case 4: case 5: case 6: printf("2�б�\n"); break;
	case 7: case 8: case 9: printf("3�б�\n"); break;
	case 10: case 11: case 12: printf("4�б�\n"); break;
	default: printf("�߸� �Է��ϼ̽��ϴ�\n");
	}
	return 0;
}