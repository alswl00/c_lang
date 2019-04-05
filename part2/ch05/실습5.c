#include <stdio.h>
void main() {
	int i, j;
	int total[5];
	static int score[][3] = {
		{83,90,88},
		{84,85,90},
		{81,82,84},
		{86,86,92},
		{75,83,93}
	};
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			total[i] = score[j][i];
		}
	}
	printf("============\n");
	printf("kor   eng   mat   total\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			printf("----------------\n");
			printf("%d%6d%6d%6d\n", score[i][j], score[i][j], score[i][j], total[i]);
		}
	}
}