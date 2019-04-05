#include <stdio.h>
#include <math.h>
#include "point.h"

void PrintPoint(POINT *p) {
	printf("(%d,%d)\n", p->x, p->y);
}

void MovePoint(POINT *p, int dx, int dy) {
	p->x += dx;
	p->y += dy;
}

double GetDistance(POINT *p1, const POINT *p2) {
	double d = sqrt(pow(p2->x - p1->x,2) + pow(p2->y - p1->y,2));
	return d;
}