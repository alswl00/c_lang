#include <stdio.h>

int sum(int,int,int);
int main(void) {
	int score[5][6] = { {0,91, 55,67},{0,99,98,87},{0,88,89,80},{0,80,67,90},{0,34,56,44} };

	
	for (int i = 1; i < 5; i++) {
		score[i][4]=sum(score[i][1], score[i][2], score[i][3]);
		score[i][5] = 1;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			if (score[i][4] < score[j][4])
				score[i][5]++;
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%3d¹ø", i+1);
		for (int j = 1; j < 6; j++) {
			printf("%5d", score[i][j]);
		}
		printf("\n");
	}

	return 0;
}

int sum(int a, int b,int c) {
	int sum_=0;
	sum_ = a + b + c;
	return sum_;
}