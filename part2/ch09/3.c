#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE *fi;		//�Է� ����
	FILE *fo;		//��� ����
					//int id;
	char c;
	char buf[100];

	fi = fopen("3.c", "r");
	if (fi == NULL) {
		printf("�Է� ���� ���� ����\n");
		return 0;
	}


	fo = fopen("E:/out.dat", "w");		

	while (fgets(buf, 100, fi) != NULL)
		fputs(buf, fo);

	fclose(fi);
	fclose(fo);


	return 0;
}