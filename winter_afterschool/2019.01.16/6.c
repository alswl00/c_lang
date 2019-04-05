#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	FILE *fp,*fi;
	char ch;
	fp = fopen("star.txt", "r");
	fi = fopen("star2.txt", "w");
	while (1) {
		ch=fgetc(fp);
		if (ch == EOF) break;
		fputc(ch, fi);
	}
	fclose(fp);
	fclose(fi);
	return 0;
}