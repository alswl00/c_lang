#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE *fi;		//입력 파일
	FILE *fo;		//출력 파일
	//int id;
	char c;

	fi = fopen("2.c", "r");
	if (fi == NULL) {
		printf("입력 파일 오픈 실패\n");
		return 0;
	}


	fo = fopen("E:/out.dat", "a");		//	절대주소 = E:/민지/c언어/part 2/ch09/ch09/out.dat ->드라이브명부터 다 씀
												// 상대주소 = /ch09/ch09/out.dat							->사용자의 주소에서 들어감

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