//p.81 �� 2-16

#include <stdio.h>

void main() {
	int a = 1234;
	float b = 1.235;
	printf("%d\n", a);
	printf("%-7d@@@\n", a);	//-�� ��������, 0�� ������ 0���� ä��
	printf("%f\n", b);
	printf("%9f\n", b);
	printf("%9.2f\n", b);
	printf("\\�ȳ�\\\n");	//�������ø� ����ϰ� �������� 2���� ���� ��µ� 
	printf("\"�ȳ�\"\n");
	printf("   \b�ϼ���");

	printf("%x ", 160);
	printf("%X\n", 160);
	printf("%o ", 160);
	printf("%O\n", 160);
	printf("%e ", 123.456);
	printf("%E\n", 123.456);

}