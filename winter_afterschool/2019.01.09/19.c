#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

void count(int m);
int main(void) {
	int money;
	printf("�ݾ��� �Է��Ͻÿ�>>");
	scanf("%d", &money);
	count(money);
}
void count(int m) {
	int num;
	int cnt[5];
	for (int i = 1; i <= 5;i++ ) {
		cnt[i - 1] = m / pow(10, 5 - i);
		m-=cnt[i-1]* pow(10, 5 - i);
	}
	printf("��:%d  õ:%d  ��:%d  ��:%d  ��:%d\n", cnt[0], cnt[1], cnt[2], cnt[3], cnt[4]);
}