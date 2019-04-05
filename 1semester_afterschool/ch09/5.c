#include <stdio.h>

#define no 4

int main(void) {

	int js[22][5] = { 0 };
	int num = 1, i = 0, j;

	printf("성적 입력(C언어,JAVA,컴구조,ITA)\n");

	do {
		printf("%d번: ", num++);
		scanf_s("%d,%d,%d,%d", &js[i][0], &js[i][1], &js[i][2], &js[i][3]);
		if (js[i][0] == -1)
			break;
		js[i][4] = js[i][0] + js[i][1] + js[i][2] + js[i][3];
		js[20][0] += js[i][0];
		js[20][1] += js[i][1];
		js[20][2] += js[i][2];
		js[i][3] += js[i][3];
		i++;
	} while (1);
	num--;
	printf("성적 처리 결과\n");
	printf("       C언어   JAVA   컴구조   ITA\n");
	for (i = 0; i < 20; i++) {
		if (js[i][0] == 0 || js[i][0]==-1) {
			continue;
		}
		printf("%d번 \t", i + 1);
		for (j = 0; j < 5; j++) printf("%d\t", js[i][j]);
		printf("%.2f\n", js[i][4] / 4.0);
	}
	printf("총점\t%d\t%d\t%d\t%d\n", js[20][0], js[20][1], js[20][2], js[20][3]);
	printf("평균\t%.2f\t%.2f\t%.2f\t%.2f\n", js[20][0]/(float)num, js[20][1] / (float)num, js[20][2] / (float)num, js[20][3] / (float)num);
}
