#ifndef POINT_H
#define POINT_H

#include <cmath>

struct Point {
    double x;
    double y;
};

double getDistance(const Point& p1, const Point& p2);

#endif // POINT_H
