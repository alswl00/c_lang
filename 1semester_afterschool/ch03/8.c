#include <stdio.h>

int main(void)
{
	float pi;
	printf("�������� �Է��ϼ���.\n");
	scanf_s("%f", &pi);
	printf("%f\n" ,pi);

	char ch1, ch2;
	printf("�����ڸ� �������� �� ���ڸ� �Է��ϼ���.\n");
	getchar();//�Է¹��ۿ� �ִ� ���ڸ� �Ѱ� �������� �Լ�(�Է������� ����)=>���͸� ������
	scanf_s("%c %c", &ch1,1,&ch2,1);//getchar �Լ��� " %c %c"ó�� �������� �� �� ����
	printf("ch1=%c ch2=%c\n", ch1, ch2);

	return 0;

}