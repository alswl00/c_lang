#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	FILE *ifp,*ofp;
	char name[20];
	int num1, num2;
	double av;
	int res;

	ifp = fopen("a.txt", "r");
	ofp = fopen("b.txt", "w");

	while (1) {
		res = fscanf(ifp, "%s%d%d", name, &num1, &num2);
		if (res == EOF) break;
		fprintf(ofp, "%s %d %.1f\n", name, num1+num2, (num1+num2)/2.0);
	}
	fclose(ifp);
	fclose(ofp);
	return 0;
}