#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int com[3];//컴퓨터가 생각하는 숫자
	int user[3];//유저 입력
	int strike = 0, ball = 0;

	srand((unsigned)time(0));
	
	for (int i = 0; i < 3; i++) {
		com[i] = rand() % 10;
		for (int j = 0; j < i; j++)
			if (com[i] == com[j]) i--;
	}
	//for (int i = 0; i < 3; i++) printf("%d ", com[i]);
	for (int n = 1; n <= 10; n++) {
		strike = 0; ball = 0;
		for (int i = 0; i < 3; i++)
			scanf("%d", &user[i]);


		for (int i = 0; i < 3; i++) {
			if (com[i] == user[i])
				strike++;
			for (int j = 0; j < 3; j++)
				if (com[i] == user[j]) ball++;
		}
		if (ball > 0) ball = ball - strike;

		if (strike == 3) {
			printf("correct\n"); break;
		}
		else if (strike + ball == 0) printf("out\n");
		else {
			printf("%d strike\n", strike);
			printf("%d ball\n", ball);
		}
		printf("\n");
	}
	if (strike != 3) printf("Fail\n");
}