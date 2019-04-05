#include <stdio.h>
#include <time.h>
int main() {
	unsigned int num[6];
	int temp;
	srand((unsigned)time(0));
	for (int i = 0; i < 6; i++) {
		num[i] = rand() % 45 + 1;
		for (int j = 0; j < i; j++) {
			if (num[i] == num[j]) {
				i--;
				break;
			}
		}
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < i; j++) {
			if (num[i] < num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (int i = 0; i < 6; i++)
		printf("%d ", num[i]);
	printf("\n");
	return 0;
}