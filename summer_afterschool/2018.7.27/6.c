#include <stdio.h>

int p(int);
void pr(int);
int main(void) {
	int total[5];
	printf("		  c���α׷��� ����\n");
	printf("           �߰�1   �߰�2   �⸻1   �⸻2   ��     ���\n");
	
	printf("������");
	pr(0);
	printf("����");
	pr(1);
	printf("�����");
	pr(2);
	printf("�����");
	pr(3);
	printf("�̸��");
	pr(4);
	return 0;
}

int p(int i) {
	int total=0;
	int score[5][4] = { { 97, 90, 88, 95 }, {76, 89, 75, 83}, {60, 70, 88, 82}, {83, 89, 92, 85}, {75, 73, 72, 78} };
		for (int j=0; j < 4; j++) {
			printf("%8d", score[i][j]);
			total += score[i][j];
		}
	return total;
}

void pr(int i) {
	int total = p(i);
	printf("%8d %8.2f\n", total, total / 4.0);
}