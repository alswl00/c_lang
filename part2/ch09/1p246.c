#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main(void) {
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	int c;

	fp1 = fopen("test9-4.txt", "r");
	fp2 = fopen("test9-5.txt", "w");

	if (fp1 == NULL)
		printf("���� ���� ���� ����\n");

	printf("fgetc() ������\n");
	while ((c = getc(fp1)) != EOF) {
		putchar(c);
		fputc(c, fp2);
	}
	printf("\n");
	fclose(fp1); fclose(fp2);
}