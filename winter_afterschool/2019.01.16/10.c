#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	int arr1[10] = { 34,90,98,65,46,21,19,53,78,2 };
	int arr2[10];
	int i;
	FILE *fp;
	fp = fopen("test.dat", "wb");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return -1;
	}
	fwrite(arr1, sizeof(int), 10, fp);
	fclose(fp);
	fp = fopen("test.dat", "rb");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return -1;
	}
	fread(arr2, sizeof(int), 10, fp);
	fclose(fp);
	for (i = 0; i < 10; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	return 0;
}