//점수를 입력받아 (-1이 입력되면 더이상 입력받지 않음) 입력받은 점수의 총점과 평균 구하기 (0~100점)
#include <stdio.h>

int main(void) {
	int i = 0; int sum = 0;
	do {
		int a;
		printf("점수를 입력하시오 : ");
		scanf_s("%d", &a);
		if (a <= 100 && a >= 0) {
			i++;
			sum += a;
		}
		else if (a == -1) { break; }
	} while (1);
	printf("총점 : %d\n", sum);
	printf("평균 : %d\n", sum / i);

}