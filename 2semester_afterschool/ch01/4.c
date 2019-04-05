#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr1[10] = { 34,90,87,65,46,21,19,53,78,2 };
	int arr2[10];
	int i;
	FILE *fp;

	fp = fopen("test.dat", "wb");
	fwrite(arr1, sizeof(int), 10, fp);
	fclose(fp);

	fp = fopen("test.dat", "rb");
	fread(arr2, sizeof(int), 10, fp);
	fclose(fp);
	for (i = 0; i < 10; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	return 0;
}