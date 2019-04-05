#include <stdio.h>
void main() {
	int k, m;
	int d[10] = { 1,5,3,2,1,4,2,5,3,1 };
	int cnt[5] = { 0 };
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j <= 5; j++) {
			if (d[i] == j)
				cnt[j - 1]++;
		}
		
	}
	for(int i=0;i<5;i++)
		printf("%d | %d\n", i + 1, cnt[i]);
}