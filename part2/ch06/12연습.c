//야구게임 연습
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int user[3];
	int com[3];
	int strike = 0, ball = 0;

	srand((unsigned)time(NULL));
	
	for (int i = 0; i < 3; i++) {
		com[i] = rand() % 10;
		for (int j = 0; j < 3; j++)
			if (com[i] == com[j]) i--;
	}

	for (int i = 0; i < 3; i++) printf("%d ", com[i]);

	for (int i = 0; i < 3; i++)
		scanf("%d", &user[i]);

	/*for (int i = 0; i < 3; i++) {
		for (int j = 0; j < i; j++) {
			if (com[i] == user[i]) strike++;
			else if (com[i] == user[j]) ball++;
		}
	}
	if (strike == 3) printf("correct\n");
	else if (ball!=0) ball = ball = strike;

	printf("%dstrike %dball", strike, ball);*/

}