#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[5] = { 0 };
	int i=0,max=0,min=100;
	printf("점수 입력 : ");
	while (i >= 0) {
		scanf("%d", &i);
		if (i >= 90) a[0]++;
		else if (i >= 80) a[1]++;
		else if (i >= 70) a[2]++;
		else if (i >= 60) a[3]++;
		else if(i>=0) a[4]++;
		if (i > max) max = i;
		else if (i>=0&&min > i) min = i;
	}
	printf("\n90점 이상 : ");
	for (int j = 0; j < a[0]; j++) printf("*");
	printf("\n80점 대 : ");
	for (int j = 0; j < a[1]; j++) printf("*");
	printf("\n70점 대 : ");
	for (int j = 0; j < a[2]; j++) printf("*"); 
	printf("\n60점 대 : ");
	for (int j = 0; j < a[3]; j++) printf("*");
	printf("\n60점 미만 : ");
	for (int j = 0; j < a[4]; j++) printf("*");

	printf("\n최고점수 : %d\n",max);
	printf("최저점수 : %d\n", min);

	return 0;
} //58 74 85 95 81 89 91 60 55 69 -10