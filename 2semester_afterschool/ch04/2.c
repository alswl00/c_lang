#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {
	int x, y;
}p1, p2;

int main() {
	double dist;
	printf("p1�� x, y ��ǥ�� �Է��ϼ��� : \n");
	scanf("%d %d", &p1.x, &p1.y);
	printf("p2�� x, y ��ǥ�� �Է��ϼ��� : \n");
	scanf("%d %d", &p2.x, &p2.y);

	dist = sqrt(pow((p2.x - p1.x),2)+ pow((p2.y - p1.y), 2));	//sqrt : ��Ʈ		//pow : ����

	printf("%.2f\n", dist);

}