#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	FILE *ifp, *ofp;
	char name[20];
	int age;
	double height;
	int res;
	ifp = fopen("c.txt", "r");
	if (ifp == NULL) {
		printf("입력파일 개방 실패\n");
		return 1;
	}
	ofp = fopen("d.txt", "w");
	if (ofp == NULL) {
		printf("출력파일 개방 실패\n");
		return 1;
	}
	while (1) {
		res = fscanf(ifp,"%s %d %lf",name,&age,&height);
		if (res == EOF) break;
		fprintf(ofp, "%lf %d %s", height, age, name);
	}
	fclose(ifp);
	fclose(ofp);

	return 0;
}