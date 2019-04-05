#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

//void rotto(int);
int main(void) {
	int n[45];
	srand((long)time(NULL));
	
	for (int i = 0; i < 45; i++) {
		for (int j = 0; j < 45; j++) {
			n[i] = rand() % MAX + 1;
			if (n[i] == n[j]) {
				i--;
				continue;
				
			}
		}
			printf("%d ", n[i]);
	}

	printf("\n");
	return 0;
}

/*void rotto(int a[45]) {
	int temp;
	for (int i = 0; i < 45; i++) {
		for (int j = i + 1; j < 45; j++) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
}*/