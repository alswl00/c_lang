//p.73 �ǽ� 1��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {
	int No;
	char Gender;
	char Name[7];
	float Weight;
	float Bodyfat;

	printf("����:");
	scanf("%c", &Gender);
	printf("��ȣ:");
	scanf("%d", &No);

	printf("�̸�:");
	scanf("%s", Name);	//�迭�� ��쿡�� scanf�� �ּ�(&)�� �Ⱦ� => �������� �ּ�.
	printf("ü��:");
	scanf("%f", &Weight);
	printf("ü����:");
	scanf("%f", &Bodyfat);

	printf("%c\t", Gender);
	printf("%d\t", No);
	printf("%s\t", Name);
	printf("%f\t", Weight);
	printf("%.1f\n", Bodyfat);	//�Ҽ��� �� ���ڸ��� ������ �ϰ� ���� �� .1 �� f �տ� ����
}