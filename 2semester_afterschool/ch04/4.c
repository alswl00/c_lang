#include <stdio.h>
#include <math.h>

struct point {
	int x, y;
};

double GetDistance(struct point* p1, struct point* p2);

int main(void) {
	struct point pt1 = { 0,0 };
	struct point pt2 = { 10,10 };
	double distance;

	distance = GetDistance(&pt1, &pt2);
	printf("�� �� ������ �Ÿ� : %5.2f\n", distance);
}

double GetDistance(struct point* p1, struct point* p2) {
	return sqrt(pow((p2->x - p1->x), 2) + pow((p2->y - p1->y), 2));
}