#include <stdio.h>

void swap(int, int);
int main(int argc, char** argv) {
	int N = 3, M = 7, T,a;
	int *pN = &N, *pM = &M;

	printf("���� : %d, %d \n", N, M);

	swap(&N, &M);
	printf("��ȯ : %d, %d \n", N, M);

	return 0;
}

void swap(int *pN, int *pM) {
	int T;

	T = *pN;
	*pN = *pM;
	*pM = T;
	
}