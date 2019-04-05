#pragma once
struct point {
	int x;
	int y;
};
typedef struct point POINT;

void PrintPoint(POINT *p);
void MovePoint(POINT *p, int dx, int dy);
double GetDistance(POINT *p1, const POINT *p2);