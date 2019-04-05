#include <stdio.h>
#include <time.h>
int main(void) {
	int num;
	int cnt[6]={ 0 };
	srand((unsigned)time(0));
	for (int i = 1; i <= 300; i++) {
		num = rand() % 6 + 1;
		cnt[num - 1]++;
	}
	for (int i = 0; i < 6; i++) {
		printf("%d: ", i+1);
		for(int j=0;j<cnt[i];j++)
			printf("*");
		printf("\n");
	}
}