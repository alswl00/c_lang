#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num;
	int cnt[4] = { 0 };
	printf("�ݾ� �Է�(õ���������� �Է�) : ");
	scanf("%d", &num);
	while (num >= 0) {
		if (num - 50000 >= 0) {
			num -= 50000;
			cnt[0]++;
			continue;
		}
		else if (num - 10000 >= 0) {
			num -= 10000;
			cnt[1]++;
			continue;
		}
		else if (num - 5000 >= 0) {
			num -= 5000;
			cnt[2]++;
			continue;
		}
		else if (num - 1000 >= 0) {
			num -= 1000;
			cnt[3]++;
			continue;
		}
		else break;
	}
	printf("50000���� %d��\n", cnt[0]);
	printf("10000���� %d��\n", cnt[1]);
	printf("5000���� %d��\n", cnt[2]);
	printf("1000���� %d��\n", cnt[3]);
}