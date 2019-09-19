#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include <math.h>
#include <iostream>
using namespace std;

Triangle::Triangle(Point& p1, Point& p2) {
    a = p1;
    b = p2;
    Point p3; //instanciates point at (0,0)
    c = p3;
}

Triangle::Triangle(double x1, double y1, double x2, double y2) {
    Point p1(x1,y1);
    Point p2(x2,y2);
    Point p3; //instanciates point at (0,0)
    a = p1; 
    b = p2;
    c = p3;
}

double Triangle::area() {
    Line l1(a, b);
    Line l2(b, c);
    Line l3(c, a);
    double A = l1.length();
    double B = l2.length();
    double C = l3.length();
    double S = (A + B + C) / 2;
    return sqrt(S*(S-A)*(S-B)*(S-C));
}

double Triangle::perimeter() {
    Line l1(a, b);
    Line l2(b, c);
    Line l3(c, a);
    return l1.length() + l2.length() + l3.length();
}