#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_BUF 100
int main(int argc, char *argv[]) {
	FILE *fp1, *fp2;
	char buffer[MAX_BUF];
	if (argc < 3) {
		printf("Usage: FCopy src_file dest_file\n");
		return -1;
	}
	fp1 = fopen(argv[1], "r");
	if (fp1 == NULL) {
		printf("%s ���� ���� ����\n", argv[1]);
		return -1;
	}
	fp2 = fopen(argv[2], "w");
	if (fp2 == NULL) {
		printf("%s���� ���� ����\n", argv[2]);
		return -1;
	}
	while (fgets(buffer, MAX_BUF, fp1) != NULL)
		fputs(buffer, fp2);

	fclose(fp1);
	fclose(fp2);
	return 0;
}