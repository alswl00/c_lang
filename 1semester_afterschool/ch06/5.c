#include <stdio.h>

int main(void) {
	
	int age = 0;

	printf("����� ���̴�? ");
	scanf_s("%d", &age);

	if (age >= 20)
	{
		if (age >= 65)
			printf("����� ����Դϴ�.\n");
		else
			printf("����� �����Դϴ�.\n");
	}
	else
	{
		printf("����� �̼������Դϴ�.\n");
	}

	return 0;
}