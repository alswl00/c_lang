#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float add(int a, int b) {
	return(float)a + b;
}
float subtract(int a, int b) {
	return (float)a - b;
}
float multiply(int a, int b) {
	return (float)a * b;
}
float divide(int a, int b) {
	return (float)a / b;
}

int main() {
	int menu;
	int su1, su2;
	float(*calc[4])(int, int) = { add,subtract,multiply,divide };	//�Լ��� �����ͷ� ����	//add
	//int sum= add(5, 7);
	printf("����� ������� ������\n");
	printf("1.����    2.����    3.����    4.������\n");
	scanf("%d", &menu);
	printf("����� �� ���� �Է��ϼ���\n");
	scanf("%d %d", &su1, &su2);
	float sum = calc[menu-1](su1, su2);
	if(menu==4) printf("�������� %.2f�Դϴ�.\n", sum);
	else printf("�������� %.0f�Դϴ�.\n", sum);
	//printf("�Լ��� �ּ� : %p", add);
	return 0;

}