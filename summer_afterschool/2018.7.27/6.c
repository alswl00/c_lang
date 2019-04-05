#include <stdio.h>

int p(int);
void pr(int);
int main(void) {
	int total[5];
	printf("		  c프로그래밍 점수\n");
	printf("           중간1   중간2   기말1   기말2   합     평균\n");
	
	printf("이현수");
	pr(0);
	printf("김기수");
	pr(1);
	printf("김범용");
	pr(2);
	printf("장기태");
	pr(3);
	printf("이명수");
	pr(4);
	return 0;
}

int p(int i) {
	int total=0;
	int score[5][4] = { { 97, 90, 88, 95 }, {76, 89, 75, 83}, {60, 70, 88, 82}, {83, 89, 92, 85}, {75, 73, 72, 78} };
		for (int j=0; j < 4; j++) {
			printf("%8d", score[i][j]);
			total += score[i][j];
		}
	return total;
}

void pr(int i) {
	int total = p(i);
	printf("%8d %8.2f\n", total, total / 4.0);
}