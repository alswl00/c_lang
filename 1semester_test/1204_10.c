#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int k, e, m, t = 0; float av;
	printf("국어점수 : ");
	scanf("%d", &k);
	printf("영어점수 : ");
	scanf("%d", &e);
	printf("수학점수 : ");
	scanf("%d", &m);
	t = k + e + m;
	av = (float)t / 3;
	printf("총점 :%d, 평균 : %.3f ==> ", t, av);
	switch ((int)av/ 10) {
	case 10: case 9:case 8: printf("잘함\n"); break;
	case 7: printf("보통\n"); break;
	case 6: case 5: printf("노력요망\n"); break;
	default: printf("능력부족\n");
	}
	return 0;
}