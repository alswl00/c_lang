#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE *fi;		//�Է� ����
	FILE *fo;		//��� ����
	//int id;
	char c;

	fi = fopen("2.c", "r");
	if (fi == NULL) {
		printf("�Է� ���� ���� ����\n");
		return 0;
	}


	fo = fopen("E:/out.dat", "a");		//	�����ּ� = E:/����/c���/part 2/ch09/ch09/out.dat ->����̺����� �� ��
												// ����ּ� = /ch09/ch09/out.dat							->������� �ּҿ��� ��

	while ((c = fgetc(fi)) != EOF) {
		fputc(c, fo);
		putchar(c);
	}

	/*scanf("%d", &id);
	printf("%d\n", id);
	fprintf(fo,"%d\n", id);*/

	fclose(fi);
	fclose(fo);


	return 0;
}