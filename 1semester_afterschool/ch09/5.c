#include <stdio.h>

#define no 4

int main(void) {

	int js[22][5] = { 0 };
	int num = 1, i = 0, j;

	printf("���� �Է�(C���,JAVA,�ı���,ITA)\n");

	do {
		printf("%d��: ", num++);
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
	printf("���� ó�� ���\n");
	printf("       C���   JAVA   �ı���   ITA\n");
	for (i = 0; i < 20; i++) {
		if (js[i][0] == 0 || js[i][0]==-1) {
			continue;
		}
		printf("%d�� \t", i + 1);
		for (j = 0; j < 5; j++) printf("%d\t", js[i][j]);
		printf("%.2f\n", js[i][4] / 4.0);
	}
	printf("����\t%d\t%d\t%d\t%d\n", js[20][0], js[20][1], js[20][2], js[20][3]);
	printf("���\t%.2f\t%.2f\t%.2f\t%.2f\n", js[20][0]/(float)num, js[20][1] / (float)num, js[20][2] / (float)num, js[20][3] / (float)num);
}
